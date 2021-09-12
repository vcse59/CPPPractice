#ifndef __NODE_H__
#define __NODE_H__

namespace Tree
{
    class CNode
    {
        int mData;
        Tree::CNode *left;
        Tree::CNode *right;

        // Copy constructor
        CNode(const CNode&);

        // Copy Assignment Operator overloading
        CNode& operator=(const CNode&);

        // Move constructor
        CNode(Tree::CNode&&);

        // Move Assignment Operator overloading
        CNode& operator=(Tree::CNode&&);

        public:

        CNode(int pData): mData{pData}, left(nullptr), right(nullptr){}
        ~CNode();


        void depthFirstSearchTraversal();
        void breadthFirstSearchTraversal();

        void setLeft(Tree::CNode *node){left = node;}
        void setRight(Tree::CNode *node){right = node;}

        Tree::CNode* getLeft(){ return left;}
        Tree::CNode* getRight(){ return right;}

        int getData() const {return mData;}
    };
};

#endif
