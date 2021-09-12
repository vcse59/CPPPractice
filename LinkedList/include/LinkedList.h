#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include "DataStore.h"

namespace DataStructure
{
    class LinkedList
    {
        DataStructure::LinkedList *next;
        DataStore *mData;
        
        // Copy Constructor
        LinkedList(const LinkedList &other);

        // Operator copy assignment 
        LinkedList& operator=(const LinkedList &other);

        // Move constructor
        LinkedList(LinkedList&& other);

        // Operator move assignment
        LinkedList& operator=(LinkedList&& other);

        public:

        // Constructor
        LinkedList(DataStore *pData);

        // Destructor
        ~LinkedList();

        // Set Next Node
        void setNext(LinkedList* other);

        // Get Next Node
        LinkedList* getNext(){ return next;}

        // Get Data
        DataStore* getData(){ return mData;}
    };
};
#endif