#include <iostream>
#include <memory>
#include "LinkedList.h"

using namespace std;
using namespace DataStructure;

// Constructor
LinkedList::LinkedList(DataStore *pData)
{
    cout << "LinkedList::LinkedList" << endl;
    next = nullptr;
    mData = pData;
}

// Destructor
LinkedList::~LinkedList()
{
    cout << "LinkedList::~LinkedList" << endl;
    if(mData != nullptr)
        delete mData;
    mData = nullptr;
    next = nullptr;
}

// Set Next Node
void LinkedList::setNext(LinkedList* other)
{
    cout << "LinkedList::Set Next Node" << endl;
    next = other;
}