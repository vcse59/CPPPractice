#include "CMapClass.h"
#include <iostream>

using namespace std;

CMapClass::CMapClass()
{
    obj = new std::map<std::string, int>();
}

CMapClass::~CMapClass()
{
    obj->clear();
    if (obj != nullptr)
        delete obj;
    obj = nullptr;
}

bool CMapClass::insertValue(std::pair<std::string, int> pValue)
{
    return obj->insert(pValue).second;
}

bool CMapClass::insertValueAt(std::map<std::string, int>::iterator it, 
        std::pair<std::string, int> pValue)
{
    if(obj->insert(it, pValue) != obj->cend())
        return true;
    else
        return false;
}

std::map<std::string, int>::iterator CMapClass::getIterator(std::string key)
{
    return obj->find(key);
}
    
void CMapClass::printContainer()
{
    for (auto it = obj->cbegin(); it != obj->cend(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
}