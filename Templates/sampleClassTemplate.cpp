#include <iostream>
#include <stdio.h>
#include "sampleClassTemplate.h"

using namespace std;

template <class T1, class T2, unsigned int size>
sampleClassTemplate<T1, T2, size>::sampleClassTemplate(T1 pParam1, T2 pParam2)
: mParam1(pParam1), mParam2(pParam2), mSize(size)
{
    cout << "sampleClassTemplate constructor is called" << endl;
}

template <class T1, class T2, unsigned int size>
sampleClassTemplate<T1, T2, size>::~sampleClassTemplate()
{
    cout << "sampleClassTemplate destructor is called" << endl;
}

template <class T1, class T2, unsigned int size>
void sampleClassTemplate<T1, T2, size>::printObjectInfo()
{
    cout << "Param1 : " << this->mParam1 << endl;
    cout << "Param2 : " << this->mParam2 << endl;
    cout << "Size   : " << this->mSize   << endl;
}