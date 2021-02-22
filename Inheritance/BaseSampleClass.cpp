#include <iostream>
#include <stdio.h>

#include "BaseSampleClass.h"

CBaseSampleClass::CBaseSampleClass(const char* pClassName)
    : mClassName(pClassName)
    {
        std::cout << "Initializing CBaseSampleClass constructor for " << pClassName << std::endl;
    }

CBaseSampleClass::~CBaseSampleClass()
{
    std::cout << "Calling CBaseSampleClass destructor for " << this->getClassName() << std::endl;
}

void CBaseSampleClass::draw()
{
    std::cout << "Calling CBaseSampleClass::draw for " << this->getClassName() << std::endl;
}

const char* CBaseSampleClass::getClassName() const
{
    return this->mClassName;
}

void CBaseSampleClass::setClassName(const char* pClassName)
{
    this->mClassName = pClassName;
}