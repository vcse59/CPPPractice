#include "CMultiMapClass.h"
#include <iostream>

using namespace std;

CMultiMapClass::CMultiMapClass()
{
    obj = new std::multimap<std::string, int>();
}

CMultiMapClass::~CMultiMapClass()
{
    obj->clear();
    if (obj != nullptr)
        delete obj;
    obj = nullptr;
}

bool CMultiMapClass::insertValue(std::pair<std::string, int> pValue)
{
    return obj->insert(pValue)->second;
}

bool CMultiMapClass::insertValueAt(std::multimap<std::string, int>::iterator it, 
        std::pair<std::string, int> pValue)
{
    if(obj->insert(it, pValue) != obj->cend())
        return true;
    else
        return false;
}

std::multimap<std::string, int>::iterator CMultiMapClass::getIterator(std::string key)
{
    return obj->find(key);
}
    
void CMultiMapClass::printContainer()
{
    for (auto it = obj->cbegin(); it != obj->cend(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
}