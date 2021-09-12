#ifndef __CONTAINER_H__
#define __CONTAINER_H__

#include <queue>
#include <iostream>
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

        void printContainer()
        {
            std::queue<CNode*> queueContainer;

            queueContainer.push(root);

            while(!queueContainer.empty())
            {
                CNode* temp = queueContainer.front();
                std::cout << temp->getData() << " ";

                if (temp->getLeft() != nullptr)
                    queueContainer.push(temp->getLeft());

                if (temp->getRight() != nullptr)
                    queueContainer.push(temp->getRight());
            }
        }
    };
};

#endif
