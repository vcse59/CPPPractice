#include "CSetClass.h"
#include <iostream>

CSetClass::CSetClass()
{
    mSetContainer = new std::set<int>();
}

CSetClass::~CSetClass()
{
    mSetContainer->clear();
    if (mSetContainer != nullptr)
        delete mSetContainer;
    mSetContainer = nullptr;
}

bool CSetClass::insertUniqueElement(int pNum)
{
    std::pair<std::set<int>::iterator, bool> ret =  mSetContainer->insert(pNum);
    return ret.second;
}

bool CSetClass::insertElementAt(const std::set<int>::iterator& it, int pNum)
{
    if (mSetContainer->insert(it, pNum) != mSetContainer->end())
        return true;
    else
        return false;
}

const std::set<int>::iterator CSetClass::getIterator(int pNum)
{
    return mSetContainer->find(pNum);
}

void CSetClass::printContainer()
{
    for(auto it = mSetContainer->cbegin(); it != mSetContainer->end(); ++it)
    {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;
}