#include <iostream>
#include <stdio.h>
#include "sampleClassTemplate.h"
#include <string>

using namespace std;

template <class T1, class T2, unsigned int pSize>
sampleClassTemplate<T1, T2, pSize>::sampleClassTemplate(T1 pParam1, T2 pParam2)
: mParam1(pParam1), mParam2(pParam2), mSize(pSize)
{
    cout << "sampleClassTemplate constructor is called" << endl;
}

template <class T1, class T2, unsigned int pSize>
sampleClassTemplate<T1, T2, pSize>::~sampleClassTemplate()
{
    cout << "sampleClassTemplate destructor is called" << endl;
}

template <class T1, class T2, unsigned int pSize>
void sampleClassTemplate<T1, T2, pSize>::printObjectInfo()
{
    cout << "Param1 : " << this->mParam1 << endl;
    cout << "Param2 : " << this->mParam2 << endl;
    cout << "Size   : " << this->mSize   << endl;
}



//==============================================================================

template <unsigned int pSize>
sampleClassTemplate<std::string, std::string, pSize>::
    sampleClassTemplate(std::string pParam1, std::string pParam2)
: mParam1(pParam1), mParam2(pParam2), mSize(pSize)
{
    cout << "sampleClassTemplate constructor is called" << endl;
}

template <unsigned int pSize>
sampleClassTemplate<std::string, std::string, pSize>::
    ~sampleClassTemplate()
{
    cout << "sampleClassTemplate destructor is called" << endl;
}

template <unsigned int pSize>
void sampleClassTemplate<std::string, std::string, pSize>::
    printObjectInfo()
{
    cout << "String Param1 : " << this->mParam1 << endl;
    cout << "String Param2 : " << this->mParam2 << endl;
    cout << "String Size   : " << this->mSize   << endl;
}