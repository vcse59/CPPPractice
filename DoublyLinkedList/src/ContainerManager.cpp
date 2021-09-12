#include <iostream>
#include "ContainerManager.h"

using namespace std;

ContainerManager::ContainerManager()
: frontHead{nullptr}, backwardHead{nullptr}
{
    cout << "ContainerManager::ContainerManager constructor" << endl;
}

ContainerManager::~ContainerManager()
{
    cout << "ContainerManager::~ContainerManager destructor" << endl;
    CDoublyLinkedList* temp = frontHead;

    while(temp != nullptr)
    {
        CDoublyLinkedList* currentNode = temp;
        temp = temp->getNext();
        delete currentNode;
    }

    frontHead = nullptr;
}

void ContainerManager::insertFront(CDoublyLinkedList* node)
{
    cout << "ContainerManager::insertFront" << endl;

    if (frontHead == nullptr)
    {
        frontHead = node;
        backwardHead = node;
    }
    else
    {
        node->setNext(frontHead);
        node->setPrev(nullptr);
        frontHead->setPrev(node);
        frontHead = node;
    }
}

void ContainerManager::deleteFront()
{
    cout << "ContainerManager::deleteFront" << endl;
    CDoublyLinkedList* headNode = frontHead;
    frontHead = frontHead->getNext();
    frontHead->setPrev(nullptr);

    delete headNode;
}

void ContainerManager::insertLast(CDoublyLinkedList* node)
{
    cout << "ContainerManager::insertLast" << endl;
    backwardHead->setNext(node);
    node->setPrev(backwardHead);
    node->setNext(nullptr);
    backwardHead = node;
}

void ContainerManager::deleteLast()
{
    cout << "ContainerManager::deleteLast" << endl;
    CDoublyLinkedList* lastNode = backwardHead;
    backwardHead->getPrev()->setNext(nullptr);
    backwardHead = backwardHead->getPrev();
    delete lastNode;
}

void ContainerManager::insertAfter(int key, CDoublyLinkedList* node)
{
    cout << "ContainerManager::insertAfter" << endl;

    CDoublyLinkedList* temp = frontHead;

    while(temp != nullptr)
    {
        if (temp->getData() == key)
        {
            CDoublyLinkedList* nextNode = temp->getNext();
            temp->setNext(node);
            node->setNext(nextNode);
            node->setPrev(temp);
            if (nextNode != nullptr)
            {
                nextNode->setPrev(node);
            }
            else
            {
                backwardHead = node;
            }
            break;
        }

        temp = temp->getNext();
    }
}

void ContainerManager::deleteByKey(int key)
{
    cout << "ContainerManager::deleteByKey" << endl;
    CDoublyLinkedList* temp = frontHead;

    while(temp != nullptr)
    {
        if (temp->getData() == key)
        {
            if(temp == frontHead)
            {
                frontHead = temp->getNext();
                frontHead->setPrev(nullptr);
            }
            else
            {
                temp->getPrev()->setNext(temp->getNext());
            }

            if (temp->getNext() != nullptr)
                temp->getNext()->setPrev(temp->getPrev());
            else
                backwardHead = temp->getPrev();

            delete temp;
            break;
        }
        temp = temp->getNext();
    }
}

void ContainerManager::displayForward()
{
    cout << "Container::displayForward" << endl;
    CDoublyLinkedList* temp = frontHead;

    cout << endl;
    while(temp != nullptr)
    {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << endl;
}

void ContainerManager::displayBackward()
{
    cout << "ContainerManager::displayBackward" << endl;
    CDoublyLinkedList* temp = backwardHead;

    cout << endl;
    while(temp != nullptr)
    {
        cout << temp->getData() << " ";
        temp = temp->getPrev();
    }
    cout << endl;
}
