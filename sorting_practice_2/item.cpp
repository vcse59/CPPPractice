#include <item.h>
#include <iostream>

using namespace std;

CItem::CItem(unsigned int pValue)
    :mValue(pValue)
{
}

CItem::~CItem()
{
}

unsigned int CItem::getValue() const
{
    return this->mValue;
}
