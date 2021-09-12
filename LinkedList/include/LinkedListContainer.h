#ifndef __LINKED_LIST_CONTAINER_H__
#define __LINKED_LIST_CONTAINER_H__

#include <memory>
#include "LinkedList.h"
#include "DataStore.h"

namespace DataStructure{
    class LinkedListContainer{
        
        DataStructure::LinkedList* head;
        unsigned int getRecursivelyLength( LinkedList *node);
        LinkedList* searchRecursively( LinkedList *node, unsigned int nodeID);
        void occurenceCountRecursive(LinkedList *node, unsigned int& occurCount, unsigned int data);
        void removeLoop(LinkedList *nodePtr);

        public:
        LinkedListContainer();
        ~LinkedListContainer();

        void push_front(DataStructure::LinkedList* other);
        const DataStructure::LinkedList& pop_front();
        void push_back(DataStructure::LinkedList* other);
        const DataStructure::LinkedList& pop_back();
        void reverse();
        void deleteNodeByID(unsigned int id);
        void deleteNodeByIndex(unsigned int index);
        unsigned int getLengthByIterative();
        unsigned int getLengthByRecursion();
        void deleteAll();
        const DataStructure::DataStore* searchIterative(unsigned int id);
        DataStructure::LinkedList* getNthNodeFromStart(unsigned int nth);
        DataStructure::LinkedList* getNthNodeFromEnd(unsigned int nth);
        DataStructure::LinkedList* getMiddleNode();
        unsigned int occurenceCountIterative(unsigned int data);
        unsigned int occurenceCountRecursive(unsigned int data);
        bool detectLoop();
        void detectAndRemoveLoop();
        bool palindromeCheck();
        void removeDuplicates();
        void sort(bool descendingOrder = false);
        void swap(unsigned int elem1, unsigned int elem2);



        const DataStructure::DataStore* searchRecursive(unsigned int id)
        {
            LinkedList *result = searchRecursively(head, id);
            if (result)
                return result->getData();
            return nullptr;
        }

        void printContainer() const{
            DataStructure::LinkedList *temp = head;
            while(temp != nullptr)
            {
                DataStore *lData = temp->getData();
                if (lData->type == DataStructure::dataType::INTEGER)
                {
                    int data = *(lData->mValue.intData);
                    std::cout << data << " : " << lData->getNodeId() << std::endl;
                }
                else
                {
                    std::string data = *(lData->mValue.stringData);
                    std::cout << data << " : " << lData->getNodeId() << std::endl;
                }
                temp = temp->getNext();
            }
        }
    };
};
#endif