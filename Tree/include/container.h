#ifndef __CONTAINER_H__
#define __CONTAINER_H__

#include <queue>
#include <iostream>
#include <stack>
#include "node.h"

namespace Tree
{
    class Container
    {
        Tree::CNode *root;

        public:

        Container();
        ~Container();

        void insert(Tree::CNode *node);

        void printBFSTraversal()
        {
            std::cout << "BFS Traversal : ";
            std::queue<CNode*> queueContainer;

            queueContainer.push(root);

            while(!queueContainer.empty())
            {
                CNode* temp = queueContainer.front();
                std::cout << temp->getData() << " ";
                queueContainer.pop();

                if (temp->getLeft() != nullptr)
                {
                    queueContainer.push(temp->getLeft());
                }

                if (temp->getRight() != nullptr)
                {
                    queueContainer.push(temp->getRight());
                }
            }
            std::cout << std::endl;
        }

        void printDFSPreOrderTraversal()
        {
            std::cout << "Pre-Order Traversal : ";
            std::stack<CNode*> stackContainer;
            stackContainer.push(root);
            CNode* temp = stackContainer.top();

            while(!stackContainer.empty())
            {
                temp = stackContainer.top();
                std::cout << temp->getData() << " ";
                stackContainer.pop();

                if(temp->getRight() != nullptr)
                {
                    stackContainer.push(temp->getRight());
                }

                if(temp->getLeft() != nullptr)
                {
                    stackContainer.push(temp->getLeft());
                }
            }

            std::cout << std::endl;
        }

        void printDFSPostOrderTraversalUsingTwoStack()
        {
            std::cout << "Post-Order Traversal(Two Stack) : ";
            std::stack<CNode*> stackContainer;
            stackContainer.push(root);
            CNode* temp = stackContainer.top();
            std::stack<CNode*> cont;

            while(!stackContainer.empty())
            {
                temp = stackContainer.top();
                cont.push(temp);
                stackContainer.pop();

                if(temp->getLeft() != nullptr)
                {
                    stackContainer.push(temp->getLeft());
                }                
                
                if(temp->getRight() != nullptr)
                {
                    stackContainer.push(temp->getRight());
                }
            }

            while(!cont.empty())
            {
                CNode* temp = cont.top();
                std::cout << temp->getData() << " ";
                cont.pop();
            }

            std::cout << std::endl;
        }

        void printDFSPostOrderTraversal()
        {
            std::stack<CNode*> stackContainer;
            CNode* temp = root;
            bool exit = false;
            std::cout << "Post-Order Traversal(One Stack) : ";

            while(!exit)
            {
                while(temp != nullptr)
                {
                    if (temp->getRight() != nullptr)
                    {
                        stackContainer.push(temp->getRight());
                    }
                    stackContainer.push(temp);
                    temp = temp->getLeft();
                }

                CNode* currentNode = stackContainer.top();
                stackContainer.pop();
                
                if (stackContainer.size() > 0)
                {
                    if(currentNode->getRight() == stackContainer.top())
                    {
                        stackContainer.pop();
                        stackContainer.push(currentNode);
                        temp = currentNode->getRight();
                    }
                    else
                    {
                        std::cout << currentNode->getData() << " ";
                        temp = nullptr;
                    }
                }
                else
                {
                    std::cout << currentNode->getData() << " ";
                    break;
                }
            }

            std::cout << std::endl;
        }

        void printDFSInOrderTraversal()
        {
            std::cout << "In-Order Traversal : ";
            std::stack<CNode*> stackContainer;
            CNode* temp = root;

            while( (temp != nullptr) || (!stackContainer.empty()))
            {
                while(temp != nullptr)
                {
                    stackContainer.push(temp);
                    temp = temp->getLeft();
                }

                temp = stackContainer.top();
                stackContainer.pop();

                std::cout << temp->getData() << " ";

                temp = temp->getRight();
            }
            std::cout << std::endl;
        }
    };
};

#endif
