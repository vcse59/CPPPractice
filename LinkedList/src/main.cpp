#include <iostream>
#include <memory>
#include "LinkedList.h"
#include "LinkedListContainer.h"
#include "DataStore.h"

using namespace DataStructure;
using namespace std;

unsigned int insertNodeLinkedList(LinkedListContainer *container)
{
	DataStore *data1 = new DataStore(34);
	container->push_back(new LinkedList(data1));

	DataStore *data2 = new DataStore("Vivek");
	container->push_back(new LinkedList(data2));

	DataStore *data3 = new DataStore(23);
	container->push_back(new LinkedList(data3));

	DataStore *data4 = new DataStore(43);
	container->push_back(new LinkedList(data4));

	DataStore *data5 = new DataStore(63);
	container->push_back(new LinkedList(data5));

	DataStore *data6 = new DataStore(23);
	container->push_back(new LinkedList(data6));

	DataStore *data7 = new DataStore("Atharv");
	container->push_back(new LinkedList(data7));

	DataStore *data8 = new DataStore("Anvi");
	container->push_back(new LinkedList(data8));

	DataStore *data9 = new DataStore(345);
	container->push_back(new LinkedList(data9));

	DataStore *data10 = new DataStore("Anjali");
	container->push_back(new LinkedList(data10));
	
	unsigned nodeID = data9->getNodeId();
	container->printContainer();

	return nodeID;
}

void createLoopLinkedList(LinkedListContainer* container)
{
	LinkedList *list1 = new LinkedList(new DataStore(56));
	container->push_back(list1);

	LinkedList *list2 = new LinkedList(new DataStore(66));
	container->push_back(list2);

	LinkedList *list3 = new LinkedList(new DataStore(76));
	container->push_back(list3);

	LinkedList *list4 = new LinkedList(new DataStore(86));
	container->push_back(list4);

	LinkedList *list5 = new LinkedList(new DataStore(96));
	container->push_back(list5);

	LinkedList *list6 = new LinkedList(new DataStore(106));
	container->push_back(list6);

	LinkedList *list7 = new LinkedList(new DataStore(116));
	container->push_back(list7);
	list7->setNext(list7);
}

void createPalidromeLinkedList(LinkedListContainer* container)
{
	LinkedList *list1 = new LinkedList(new DataStore(1));
	container->push_back(list1);

	LinkedList *list2 = new LinkedList(new DataStore(2));
	container->push_back(list2);

	LinkedList *list3 = new LinkedList(new DataStore(3));
	container->push_back(list3);

	LinkedList *list4 = new LinkedList(new DataStore(3));
	container->push_back(list4);

	LinkedList *list5 = new LinkedList(new DataStore(2));
	container->push_back(list5);

	LinkedList *list6 = new LinkedList(new DataStore(1));
	container->push_back(list6);
}

void createSortedIntegerLinkedList(LinkedListContainer* container)
{
	DataStore *data1 = new DataStore(11);
	container->push_back(new LinkedList(data1));

	DataStore *data2 = new DataStore(11);
	container->push_back(new LinkedList(data2));

	DataStore *data3 = new DataStore(11);
	container->push_back(new LinkedList(data3));

	DataStore *data4 = new DataStore(21);
	container->push_back(new LinkedList(data4));

	DataStore *data5 = new DataStore(43);
	container->push_back(new LinkedList(data5));

	DataStore *data6 = new DataStore(43);
	container->push_back(new LinkedList(data6));

	DataStore *data7 = new DataStore(60);
	container->push_back(new LinkedList(data7));
}

void createIntegerLinkedList(LinkedListContainer* container)
{
	DataStore *data1 = new DataStore(151);
	container->push_back(new LinkedList(data1));

	DataStore *data2 = new DataStore(421);
	container->push_back(new LinkedList(data2));

	DataStore *data3 = new DataStore(214);
	container->push_back(new LinkedList(data3));

	DataStore *data4 = new DataStore(191);
	container->push_back(new LinkedList(data4));

	DataStore *data5 = new DataStore(643);
	container->push_back(new LinkedList(data5));

	DataStore *data6 = new DataStore(132);
	container->push_back(new LinkedList(data6));

	DataStore *data7 = new DataStore(503);
	container->push_back(new LinkedList(data7));
}

int main(int argc, char *argv[])
{
	LinkedListContainer* container = new LinkedListContainer();
	unsigned int nodeID = insertNodeLinkedList(container);

	cout << "==========================" << endl;
	cout << "Iterative Occurence of 345 in linked list : " << container->occurenceCountIterative(345) << endl;
	cout << "==========================" << endl;

	cout << "==========================" << endl;
	cout << "Recursive Occurence of 345 in linked list : " << container->occurenceCountRecursive(345) << endl;
	cout << "==========================" << endl;

	cout << "Get Nth node from start of Linked list" << endl;
	cout << "==========================" << endl;
	unsigned int nth = 3;
	LinkedList *nthNode = container->getNthNodeFromStart(nth);
	if (nthNode == nullptr)
	{
		cout << "Linked list length is lesses than nth : " << nth << endl; 
	}
	else
	{
		cout << "Node at length : " << nth << " id : " << nthNode->getData()->getNodeId() << endl;
	}
	cout << "==========================" << endl;

	cout << "Get Nth node from end of Linked list" << endl;
	cout << "==========================" << endl;
	LinkedList *nthNodeFromEnd = container->getNthNodeFromEnd(nth);
	if (nthNodeFromEnd == nullptr)
	{
		cout << "Linked list length is lesses than nth : " << nth << endl; 
	}
	else
	{
		cout << "Node at length : " << nth << " id : " << nthNodeFromEnd->getData()->getNodeId() << endl;
	}
	cout << "==========================" << endl;

	cout << "Get Middle node of Linked list" << endl;
	cout << "==========================" << endl;
	LinkedList *middleNode = container->getMiddleNode();
	if (middleNode == nullptr)
	{
		cout << "There is no middle node " << endl; 
	}
	else
	{
		cout << "Node id : " << middleNode->getData()->getNodeId() << endl;
	}
	cout << "==========================" << endl;


	cout << "Search Iterative Linked list" << endl;
	cout << "==========================" << endl;
	const DataStructure::DataStore *element1 = container->searchIterative(nodeID);
	if (element1 == nullptr)
	{
		cout << "Element not found" << endl;
	}
	else
	{
		cout << "Element is found... Value : " << element1->getNodeId() << endl;
	}
	cout << "==========================" << endl;

	cout << "Search Recursively Linked list" << endl;
	cout << "==========================" << endl;
	const DataStructure::DataStore *element2 = container->searchRecursive(34534);
	if (element2 == nullptr)
	{
		cout << "Element not found" << endl;
	}
	else
	{
		cout << "Element is found... Value : " << element2->getNodeId() << endl;
	}
	cout << "==========================" << endl;


	cout << "Reversed Linked list" << endl;
	cout << "==========================" << endl;
	container->reverse();
	container->printContainer();
	cout << "==========================" << endl;

	cout << "Delete Node by ID : " << nodeID << " with 93" << " from Linked list" << endl;
	cout << "==========================" << endl;
	container->deleteNodeByID(nodeID);
	container->printContainer();
	cout << "==========================" << endl;

	cout << "Delete Node by Index : 4 from Linked list" << endl;
	cout << "==========================" << endl;
	container->deleteNodeByIndex(4);
	container->printContainer();
	cout << "==========================" << endl;

	cout << "==========================" << endl;
	cout << "Length of linked list : " << container->getLengthByRecursion() << endl;
	cout << "==========================" << endl;

	cout << "==========================" << endl;
	cout << "Delete all the nodes from linked list" << endl;
	container->deleteAll();
	cout << "Length of linked list : " << container->getLengthByRecursion() << endl;
	cout << "==========================" << endl;

	delete container;
	container = nullptr;


	container = new LinkedListContainer();
	createLoopLinkedList(container);

	bool isLoopDetected = container->detectLoop();
	cout << "Loop detected ? : " << isLoopDetected << endl;

	container->detectAndRemoveLoop();

	isLoopDetected = container->detectLoop();
	cout << "Loop detected ? : " << isLoopDetected << endl;

	container->printContainer();

	delete container;

	container = new LinkedListContainer();
	createPalidromeLinkedList(container);
	
	container->printContainer();

	cout << "Palindrome check" << endl;
	bool isPalindrome = container->palindromeCheck();
	cout << "Palindrome detected ? : " << isPalindrome << endl;
	
	delete container;

	container = new LinkedListContainer();
	createSortedIntegerLinkedList(container);
	container->printContainer();
	container->removeDuplicates();
	cout << "Removing Duplicates" << endl;
	container->printContainer();
	delete container;

	container = new LinkedListContainer();
	createIntegerLinkedList(container);
	container->printContainer();
	container->sort();
	cout << "Sorting list Ascending order : " << endl;
	container->printContainer();
	delete container;

	container = new LinkedListContainer();
	createIntegerLinkedList(container);
	container->printContainer();
	container->sort(true);
	cout << "Sorting list descending order: " << endl;
	container->printContainer();
	delete container;

	container = new LinkedListContainer();
	createIntegerLinkedList(container);
	container->printContainer();
	unsigned int elem1 = 151;
	unsigned int elem2 = 643;
	container->swap(elem1, elem2);
	cout << "Swapping elmenet  " <<  elem1 << " " << elem2 << endl;
	container->printContainer();
	delete container;

	return 0;
}