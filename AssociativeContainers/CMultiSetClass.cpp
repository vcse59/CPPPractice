#include "CMultiSetClass.h"
#include <iostream>

using namespace std;

CMultiSetClass::CMultiSetClass()
{
    multiSet = new std::multiset<int>();
}

CMultiSetClass::~CMultiSetClass()
{
    multiSet->clear();
    if (multiSet != nullptr)
        delete multiSet;
    multiSet = nullptr;
}

bool CMultiSetClass::insertValue(int pNum)
{
    if(multiSet->insert(pNum) != multiSet->cend())
        return true;
    else
        return false;
}

bool CMultiSetClass::insertValueAt(const std::multiset<int>::iterator& it,int pNum)
{
    if(multiSet->insert(it, pNum) != multiSet->cend())
        return true;
    else
        return false;
}

std::multiset<int>::iterator  CMultiSetClass::getIterator(int pNum)
{
    return multiSet->find(pNum);
}

void CMultiSetClass::printContainer()
{
    for(auto it = multiSet->cbegin(); it != multiSet->cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}