#include <iostream>
#include "container.h"

using namespace std;
using namespace Tree;

Container::Container():root(nullptr)
{
}
        
Container::~Container()
{
}
        
void Container::insert(Tree::CNode *node)
{
    if(root == nullptr)
    {
        root = node;
    }
    else
    {
        CNode* temp = root;
        CNode* prevNode = nullptr;
        while(temp != nullptr)
        {
            prevNode = temp;
            if (node->getData() >= temp->getData())
            {
                temp = temp->getRight();
                if(temp == nullptr)
                {
                    prevNode->setRight(node);
                    break;
                }
            }
            else
            {
                temp = temp->getLeft();
                if(temp == nullptr)
                {
                    prevNode->setLeft(node);
                    break;
                }
            }
        }
    }
}
