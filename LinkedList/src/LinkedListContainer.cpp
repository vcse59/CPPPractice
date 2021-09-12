#include <iostream>
#include "LinkedListContainer.h"
#include <memory>
#include <stack>

using namespace std;
using namespace DataStructure;

LinkedListContainer::LinkedListContainer():
head(nullptr)
{
    cout << "LinkedListContainer::LinkedListContainer" << endl;
}

LinkedListContainer::~LinkedListContainer()
{
    cout << "LinkedListContainer::~LinkedListContainer" << endl;
    deleteAll();
}

void LinkedListContainer::push_front(LinkedList* node)
{
    cout << "LinkedListContainer::push_front" << endl;

    if (head == nullptr)
    {
        head = node;
    }
    else 
    {
        LinkedList* temp = head->getNext();
        head = node;
        node->setNext(temp);
    }
}

void LinkedListContainer::push_back(LinkedList* node)
{
    cout << "LinkedListContainer::push_back" << endl;

    if (head == nullptr)
    {
        head = node;
    }
    else 
    {
        LinkedList* temp = head;
        while(temp->getNext() != nullptr)
        {
            temp = temp->getNext();
        }

        temp->setNext(node);
    }
}

const LinkedList& LinkedListContainer::pop_front()
{
    LinkedList* temp = head;
    head = temp->getNext();

    return *temp;
}

const LinkedList& LinkedListContainer::pop_back()
{
    LinkedList* temp = head;
    LinkedList *prev = nullptr;

    while(temp->getNext() != nullptr)
    {
        prev = temp;
        temp = temp->getNext();
    }
    
    if (temp == nullptr)
    {
        head = nullptr;
    }
    else{
        prev->setNext(nullptr);
    }
    return *temp;
}

void LinkedListContainer::reverse()
{
    LinkedList* temp = head;
    LinkedList* reverseLinkedList = nullptr;

    while(temp != nullptr)
    {
        if (reverseLinkedList == nullptr)
        {
            reverseLinkedList = temp;
            temp = temp->getNext();
            reverseLinkedList->setNext(nullptr);
        }
        else
        {
            LinkedList *reverseHead = temp;
            temp = temp->getNext();
            reverseHead->setNext(reverseLinkedList);
            reverseLinkedList = reverseHead;
        }
    }

    head = reverseLinkedList;
}

void LinkedListContainer::deleteNodeByID(unsigned int id)
{
    LinkedList* temp = head;
    LinkedList* prev = nullptr;

    while(temp != nullptr)
    {
        if (temp->getData()->getNodeId() == id){

            if (prev == nullptr)
            {
                head = temp->getNext();
                delete temp;
            }
            else {
                prev->setNext(temp->getNext());
                delete temp;
            }
            break;
        }
        prev = temp;
        temp = temp->getNext();
    }
}

void LinkedListContainer::deleteNodeByIndex(unsigned int index)
{
    LinkedList *temp = head;
    LinkedList* prev = nullptr;
    unsigned int lIndex = 0;

    while(temp != nullptr)
    {
        if (lIndex == index - 1)
        {
            if (prev == nullptr)
            {
                head = temp->getNext();
                delete temp;
            }
            else
            {
                prev->setNext(temp->getNext());
                delete temp;
            }
            break;
        }
        lIndex++;
        prev = temp;
        temp = temp->getNext();
    }
}

unsigned int LinkedListContainer::getLengthByIterative()
{
    LinkedList* temp = head;
    int length = 0;

    while(temp != nullptr)
    {
        length++;
        temp = temp->getNext();
    }

    return length;
}

void LinkedListContainer::deleteAll()
{
    LinkedList *temp = head;
    while(temp != nullptr)
    {
        LinkedList *freeItem = temp;
        temp = temp->getNext();
        delete freeItem;
        freeItem = nullptr;
    }

    head = nullptr;
}

unsigned int LinkedListContainer::getLengthByRecursion()
{
    return getRecursivelyLength(head) - 1;
}

unsigned int LinkedListContainer::getRecursivelyLength( LinkedList *node)
{
    if (node == nullptr)
    {
        return 1;
    }

    return getRecursivelyLength(node->getNext()) + 1;
}

const DataStructure::DataStore* LinkedListContainer::searchIterative(unsigned int id)
{
    LinkedList* temp = head;

    while(temp != nullptr)
    {
        if (temp->getData()->getNodeId() == id)
        {
            return temp->getData();
        }
        temp = temp->getNext();
    }

    return nullptr;
}

LinkedList* LinkedListContainer::searchRecursively( LinkedList *node, unsigned int nodeID)
{
    if (node == nullptr)
        return nullptr;
 
    if (node->getData()->getNodeId() == nodeID)
        return node;
 
    return  searchRecursively(node->getNext(), nodeID);
}

DataStructure::LinkedList* LinkedListContainer::getNthNodeFromStart(unsigned int nth)
{
    LinkedList* temp = head;
    unsigned int lCount = 0;

    while(temp != nullptr)
    {
        if (lCount == nth - 1)
        {
            return temp;
        }
        lCount++;
        temp = temp->getNext();
    }

    return nullptr;
}

DataStructure::LinkedList* LinkedListContainer::getNthNodeFromEnd(unsigned int nth)
{
    LinkedList* temp = head;
    LinkedList* prev = head;
    unsigned int lCount = 0;

    while(temp != nullptr)
    {
        if (lCount > nth - 1)
            prev = prev->getNext();
        lCount++;
        temp = temp->getNext();
    }

    return prev;
}

DataStructure::LinkedList* LinkedListContainer::getMiddleNode(){
    LinkedList* temp = head;
    LinkedList* middle = nullptr;
    unsigned int lIndex = 1;

    while(temp != nullptr)
    {
        if ( (lIndex % 2) == 0)
        {
            if(middle == nullptr)
                middle = head;
            else
                middle = middle->getNext();
        }
        lIndex++;
        temp = temp->getNext();
    }

    if ( (lIndex % 2)  == 0 )
        return middle->getNext();
    else
        return middle;
}

unsigned int LinkedListContainer::occurenceCountIterative(unsigned int data)
{
    LinkedList* temp = head;
    unsigned int lCount = 0;

    while(temp != nullptr)
    {
        if  ( (temp->getData()->type == INTEGER) && (*(temp->getData()->mValue.intData) == data))
        {
            lCount++;
        }
        temp = temp->getNext();
    }
    return lCount;
}

void LinkedListContainer::occurenceCountRecursive(LinkedList *node, unsigned int& occurCount, unsigned int data)
{
    if (node == nullptr)
        return;

    if  ( (node->getData()->type == INTEGER) && (*(node->getData()->mValue.intData) == data))
        occurCount++;
    occurenceCountRecursive(node->getNext(), occurCount, data);
}

unsigned int LinkedListContainer::occurenceCountRecursive(unsigned int data)
{
    unsigned int occurCount = 0;
    occurenceCountRecursive(head, occurCount, data);
    return occurCount;
}

bool LinkedListContainer::detectLoop()
{
    LinkedList* slow_p = head;
    LinkedList* fast_p = head;
    bool isLoopDetected = false;

    while(slow_p && fast_p && fast_p->getNext()) {
        slow_p = slow_p->getNext();
        fast_p = fast_p->getNext()->getNext();

        if (slow_p == fast_p) {
            isLoopDetected = true;
            break;
        }
    }

    return isLoopDetected;
}

void LinkedListContainer::detectAndRemoveLoop()
{
    LinkedList* slow_p = head;
    LinkedList* fast_p = head;

    while(slow_p && fast_p && fast_p->getNext())
    {
        slow_p = slow_p->getNext();
        fast_p = fast_p->getNext()->getNext();

        if(slow_p == fast_p)
        {
            removeLoop(slow_p);
        }
    }
}

void LinkedListContainer::removeLoop(LinkedList* node_ptr)
{
    unsigned int nodeLoopCount = 1;
    LinkedList* temp = node_ptr->getNext();
    LinkedList* firstPtr = nullptr;
    LinkedList* secondPtr = head;

    while(temp != node_ptr) {
        temp = temp->getNext();
        nodeLoopCount++;
    }

    cout << "Number of nodes in a loop : " << nodeLoopCount << endl;

    unsigned int nodeCount = 0;
    bool IsNumberOfNodesVisited = false; 
    LinkedList* prev = nullptr;
    while(secondPtr != firstPtr)
    {
        if (nodeLoopCount == nodeCount)
        {
            IsNumberOfNodesVisited = true;
            if (firstPtr == nullptr)
                firstPtr = head;
            firstPtr = firstPtr->getNext();
        }
        if (!IsNumberOfNodesVisited)
            nodeCount++;
        prev = secondPtr;
        secondPtr = secondPtr->getNext();
    }

    prev->setNext(nullptr);
}

bool LinkedListContainer::palindromeCheck()
{
    stack<LinkedList*> container;
    LinkedList* temp = head;

    while(temp != nullptr)
    {
        container.push(new LinkedList(new DataStore(*(temp->getData()))));
        temp = temp->getNext();
    }

    temp = head;
    bool isPalidrome = true;

    while(temp != nullptr)
    {
        if (container.size() > 0)
        {
            LinkedList* node = container.top();
            if ( (temp->getData()->type == DataStructure::dataType::INTEGER)
                && (node->getData()->type == DataStructure::dataType::INTEGER))
            {
                if (*(temp->getData()->mValue.intData) == *(node->getData()->mValue.intData))
                    {
                        delete node;
                        container.pop();
                        temp = temp->getNext();
                        continue;
                    }
                    else
                    {
                        isPalidrome = false;
                        break;
                    }
            }
            else if ( (temp->getData()->type == DataStructure::dataType::STRING)
                && (node->getData()->type == DataStructure::dataType::STRING))
            {
                if (*(temp->getData()->mValue.stringData) == *(node->getData()->mValue.stringData))
                    {
                        delete node;
                        container.pop();
                        temp = temp->getNext();
                        continue;
                    }
                    else
                    {
                        isPalidrome = false;
                        break;
                    }
            }
        }
        temp = temp->getNext();
    }

    if (container.size() != 0)
    {
        while(!container.empty())
        {
            delete container.top();
            container.pop();
        }
    }

    return isPalidrome;
}

void LinkedListContainer::removeDuplicates()
{
    LinkedList *temp = head;
    LinkedList *prev = nullptr;

    while(temp != nullptr)
    {
        if(prev != nullptr)
        {
            if ( (temp->getData()->type == DataStructure::dataType::INTEGER)
                && (prev->getData()->type == DataStructure::dataType::INTEGER))
            {
                if (*(temp->getData()->mValue.intData) == *(prev->getData()->mValue.intData))
                {
                    LinkedList *tempNode = temp;
                    prev->setNext(temp->getNext());
                    temp = temp->getNext();
                    delete tempNode;
                    continue;
                }
            }
        }
        prev = temp;
        temp = temp->getNext();
    }
}

void LinkedListContainer::sort(bool descendingOrder)
{
    LinkedList* temp = head;
    LinkedList* sortedListHead = nullptr;
    LinkedList* sortedListTracker = nullptr;

    while(temp != nullptr)
    {
        if (sortedListHead == nullptr)
        {
            sortedListHead = temp;
            temp = temp->getNext();
            sortedListHead->setNext(nullptr);
            sortedListTracker = sortedListHead;
        }
        else
        {
            LinkedList* prev = nullptr;
            sortedListTracker = sortedListHead;
            while(sortedListTracker != nullptr)
            {
                if (prev == nullptr)
                {
                    if ( 
                        (*(temp->getData()->mValue.intData) <= *(sortedListTracker->getData()->mValue.intData) )
                        && (descendingOrder == false)
                    )
                    {
                        sortedListHead = temp;
                        temp = temp->getNext();
                        sortedListHead->setNext(sortedListTracker);
                        break;
                    }
                    else if (
                                (*(temp->getData()->mValue.intData) >= *(sortedListTracker->getData()->mValue.intData) )
                            && (descendingOrder == true)
                    )
                    {
                        LinkedList* currentNode = temp;
                        sortedListHead = currentNode;
                        temp = temp->getNext();
                        currentNode->setNext(sortedListTracker);
                        break;
                    }
                }
                else
                {
                    if  ( 
                            (
                                ( *(temp->getData()->mValue.intData) <= *(sortedListTracker->getData()->mValue.intData))
                                && ( *(temp->getData()->mValue.intData) > *(prev->getData()->mValue.intData))
                            )
                            || 
                            (
                                ( *(temp->getData()->mValue.intData) >= *(sortedListTracker->getData()->mValue.intData))
                                && ( *(temp->getData()->mValue.intData) < *(prev->getData()->mValue.intData))
                            )
                        )
                    {
                        LinkedList* currentNode = temp;
                        prev->setNext(currentNode);
                        temp = temp->getNext();
                        currentNode->setNext(sortedListTracker);
                        break;
                    }
                }
                prev = sortedListTracker;
                sortedListTracker = sortedListTracker->getNext();
            }

            if (sortedListTracker == nullptr)
            {
                LinkedList* currentNode = temp;
                prev->setNext(currentNode);
                temp = temp->getNext();
                currentNode->setNext(nullptr);
            }
        }
    }

    head = sortedListHead;
}

void LinkedListContainer::swap(unsigned int elem1, unsigned int elem2)
{
    LinkedList* temp = head;
    LinkedList* ptr1 = head;
    LinkedList* ptr2 = head;
    LinkedList* prev1 = nullptr;
    LinkedList* prev2 = nullptr;
    LinkedList* prev = nullptr;

    while(temp != nullptr)
    {
        if ( *(temp->getData()->mValue.intData) == elem1)
        {
            prev1 = prev;
            ptr1 = temp;
        }

        if ( *(temp->getData()->mValue.intData) == elem2)
        {
            prev2 = prev;
            ptr2 = temp;
        }        

        prev = temp;
        temp = temp->getNext();
    }

    if (ptr1 && ptr2 && prev1 && prev2)
    {
        prev1->setNext(ptr2);
        prev2->setNext(ptr1);
        LinkedList* node = ptr2->getNext();
        ptr2->setNext(ptr1->getNext());
        ptr1->setNext(node);
    }
}
