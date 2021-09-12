#include <iostream>
#include "DoublyLinkedList.h"

using namespace std;


CDoublyLinkedList::CDoublyLinkedList(int pData)
:mData{pData}, prev{nullptr}, next{nullptr}
{
    cout << "Calling CDoublyLinkedList::CDoublyLinkedList constructor" << endl;
}

CDoublyLinkedList::~CDoublyLinkedList()
{
   next = nullptr;
   prev = nullptr;
}

void CDoublyLinkedList::setNext(CDoublyLinkedList* node)
{
    next = node;
}

void CDoublyLinkedList::setPrev(CDoublyLinkedList* node)
{
    prev = node;
}

CDoublyLinkedList* CDoublyLinkedList::getNext() const
{
    return next;
}

CDoublyLinkedList* CDoublyLinkedList::getPrev() const
{
    return prev;
}

int CDoublyLinkedList::getData() const
{
    return mData;
}
