#include <iostream>
#include "ContainerManager.h"

using namespace std;

int main(int argc, char *argv[])
{
    ContainerManager *cont = new ContainerManager();

    cont->insertFront(new CDoublyLinkedList(23));
    cont->insertFront(new CDoublyLinkedList(45));
    cont->insertFront(new CDoublyLinkedList(26));
    cont->insertFront(new CDoublyLinkedList(96));
    cont->insertFront(new CDoublyLinkedList(64));
    cont->insertFront(new CDoublyLinkedList(61));
    cont->displayForward();

    cont->deleteFront();

    cont->displayForward();

    cont->insertLast(new CDoublyLinkedList(105));
    cont->insertLast(new CDoublyLinkedList(185));
    cont->insertLast(new CDoublyLinkedList(115));
    cont->insertLast(new CDoublyLinkedList(405));
    cont->insertLast(new CDoublyLinkedList(305));
    cont->displayForward();

    cont->deleteLast();

    cont->displayForward();

    cont->insertAfter(45, new CDoublyLinkedList(215));
    cont->insertAfter(105, new CDoublyLinkedList(205));
    cont->insertAfter(405, new CDoublyLinkedList(905));
    cont->insertAfter(64, new CDoublyLinkedList(605));
    cont->insertAfter(23, new CDoublyLinkedList(602));

    cont->deleteByKey(905);
    cont->displayForward();
    cont->displayBackward();
    delete cont;
    return 0;
}
