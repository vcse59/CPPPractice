#ifndef __DOUBLY_LINKED_LIST_H__
#define __DOUBLY_LINKED_LIST_H__

class CDoublyLinkedList
{
    int mData;
    CDoublyLinkedList* prev;
    CDoublyLinkedList* next;

    CDoublyLinkedList(const CDoublyLinkedList&);
    CDoublyLinkedList& operator=(const CDoublyLinkedList&);

    CDoublyLinkedList(CDoublyLinkedList&&);
    CDoublyLinkedList& operator=(CDoublyLinkedList&&);

    public:

    CDoublyLinkedList(int pData);
    ~CDoublyLinkedList();

    void setNext(CDoublyLinkedList* node);
    void setPrev(CDoublyLinkedList* node);

    CDoublyLinkedList* getNext() const;
    CDoublyLinkedList* getPrev() const;

    int getData() const;
};

#endif
