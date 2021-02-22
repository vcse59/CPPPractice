#include <iostream>
#include <stdio.h>

#include "DerivedSampleClass.h"

CDerivedSampleClass::CDerivedSampleClass(const char* pClassName)
    : CBaseSampleClass(pClassName)
    {
        std::cout << "Initializing CDerivedSampleClass constructor for " << pClassName << std::endl;
    }

CDerivedSampleClass::~CDerivedSampleClass()
{
    std::cout << "Calling CDerivedSampleClass destructor for " << this->getClassName() << std::endl;
}

void CDerivedSampleClass::draw()
{
    std::cout << "Calling CDerivedSampleClass::draw for " << this->getClassName() << std::endl;
}

const char* CDerivedSampleClass::getClassName() const
{
    return this->mClassName;
}

void CDerivedSampleClass::setClassName(const char* pClassName)
{
    this->mClassName = pClassName;
}