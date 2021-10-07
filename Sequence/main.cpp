#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <list>
#include <array>
#include <forward_list>

using namespace std;

// Vector example
void vectorExample()
{
    std::vector<int> vect;
    
    vect.push_back(4);
    vect.push_back(56);
    vect.push_back(23);
    vect.push_back(65);
    vect.push_back(8);
    vect.push_back(12);
    vect.push_back(64);
    
    cout << "Sorted vector in ascending order : " << endl;
    for (auto it = vect.cbegin() ; it != vect.cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    // Sort the vector
    sort(vect.begin(), vect.end(), greater<int>());
    cout << "Sorted vector in descending order : " << endl;
    for (auto it = vect.cbegin() ; it != vect.cend(); ++it)
    {
        cout << *it << " ";
    }  
    cout << endl;
}


void dequeExample()
{
    deque<int> *dequeObj = new deque<int>();
    
    dequeObj->push_front(43);
    dequeObj->push_front(32);
    dequeObj->push_front(56);
    dequeObj->push_front(8);
    dequeObj->push_back(34);
    dequeObj->push_back(65);
    dequeObj->push_back(76);
    dequeObj->push_back(23);
    dequeObj->push_back(464);
    
    cout << "Deque content is : " << endl;
    for (auto it = dequeObj->cbegin(); it != dequeObj->cend(); ++it)
    {
        cout << *it <<  " ";
    }
    cout << endl;
    
    cout << "Sorted deque container in ascending order is : " << endl;
    sort(dequeObj->begin(), dequeObj->end());
    for (auto it = dequeObj->cbegin(); it != dequeObj->cend(); ++it)
    {
        cout << *it <<  " ";
    }
    cout << endl;

    cout << "Sorted deque container in descending order is : " << endl;
    sort(dequeObj->begin(), dequeObj->end(), greater<int>());
    for (auto it = dequeObj->cbegin(); it != dequeObj->cend(); ++it)
    {
        cout << *it <<  " ";
    }
    cout << endl;
    
    if (dequeObj != nullptr)
        delete dequeObj;
    dequeObj = nullptr;
} 

void listExample()
{
    list<int> *listObj = new list<int>();
    
    listObj->push_back(62);
    listObj->push_back(43);
    listObj->push_back(14);
    listObj->push_back(54);
    listObj->push_back(76);
    listObj->push_back(23);
    listObj->push_back(65);
    listObj->push_back(36);
    listObj->push_back(73);
    listObj->push_back(1256);
    
    cout << "list content is : " << endl;
    for (auto it = listObj->cbegin(); it != listObj->cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Sorted list container is ascending order is : " << endl;
    listObj->sort();
    for (auto it = listObj->cbegin(); it != listObj->cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Sorted list container is descending order is : " << endl;
    listObj->sort(greater<int>());
    for (auto it = listObj->cbegin(); it != listObj->cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    if (listObj != nullptr)
        delete listObj;
    listObj = nullptr;
}

void arrayExample()
{
    array<int, 10> *arrObj = new array<int, 10>();
    
    for (auto index = 0; index < 10; ++index)
    {
        arrObj->at(index) = index;
    }

    cout << "Array content is : " << endl;
    for(auto it = arrObj->cbegin(); it != arrObj->cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Sorted array in ascending order is : " << endl;
    sort(arrObj->begin(), arrObj->end());
    for(auto it = arrObj->cbegin(); it != arrObj->cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;


    cout << "Sorted array in descending order is : " << endl;
    sort(arrObj->begin(), arrObj->end(), greater<int>());
    for(auto it = arrObj->cbegin(); it != arrObj->cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    if (arrObj != nullptr)
        delete arrObj;
    arrObj = nullptr;
}

void forward_listExample()
{
    forward_list<int> *fwdListObj = new forward_list<int>();
    
    forward_list<int>::iterator it;
    
    it = fwdListObj->insert_after(fwdListObj->before_begin(), 23);
    it = fwdListObj->insert_after(it, 323);
    it = fwdListObj->insert_after(it, 152);
    it = fwdListObj->insert_after(it, 543);
    it = fwdListObj->insert_after(it, 2, 62);
    it = fwdListObj->insert_after(it, 346);
    it = fwdListObj->insert_after(it, 85);
    it = fwdListObj->insert_after(it, 4345);
    it = fwdListObj->insert_after(it, 9875);
    it = fwdListObj->insert_after(it, 6575);
    
    cout << "Forward list content is : " << endl;
    for (auto it = fwdListObj->cbegin(); it != fwdListObj->cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Sorted forward_list content in ascending order is : " << endl;
    fwdListObj->sort();
    for (auto it = fwdListObj->cbegin(); it != fwdListObj->cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Sorted forward_list content in descending order is : " << endl;
    fwdListObj->sort(greater<int>());
    for (auto it = fwdListObj->cbegin(); it != fwdListObj->cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void basicStringExample()
{
    
}

int main(int argc, char **argv)
{
    vectorExample();
    dequeExample();
    listExample();
    arrayExample();
    forward_listExample();
	return 0;
}
