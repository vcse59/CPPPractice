#ifndef __CONTAINER_H__
#define __CONTAINER_H__

#include "DoublyLinkedList.h"

class ContainerManager{

    CDoublyLinkedList* frontHead;
    CDoublyLinkedList* backwardHead;

    ContainerManager(const ContainerManager&);
    ContainerManager& operator=(const ContainerManager&);

    ContainerManager(ContainerManager&&);
    ContainerManager& operator=(ContainerManager&&);

    public:
    
    ContainerManager();
    ~ContainerManager();

    void insertFront(CDoublyLinkedList* node);
    void deleteFront();

    void insertLast(CDoublyLinkedList* node);
    void deleteLast();

    void insertAfter(int key, CDoublyLinkedList* node);
    void deleteByKey(int key);

    void displayForward();
    void displayBackward();    
};

#endif
