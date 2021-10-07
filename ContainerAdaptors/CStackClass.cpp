#include "CStackClass.h"

CStackClass::CStackClass()
{
    obj = new std::stack<int, std::vector<int>>();
}

CStackClass::~CStackClass()
{
    if (obj != nullptr)
        delete obj;
    obj = nullptr;
}

void CStackClass::pushValue(int pNum)
{
    obj->push(pNum);
}

void CStackClass::popValue()
{
    obj->pop();
}

int CStackClass::getLength()
{
    return obj->size();
}