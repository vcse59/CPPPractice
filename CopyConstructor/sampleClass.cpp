#include <iostream>
#include <stdio.h>
#include "sampleClass.h"
#include <cstring>

CSampleClass::CSampleClass(char* className)
{
    this->mClassName = className;
    std::cout << "Entering CSampleClass constructor " << this->getClassName() << std::endl;
    this->mName = nullptr;
    this->mAge = 0;
    std::cout << "Exiting CSampleClass constructor " << this->getClassName() << std::endl;
}

CSampleClass::~CSampleClass()
{
    std::cout << "Destructor called for " << this->getClassName() << std::endl;
    if (this->mName != nullptr)
    {
        free(this->mName);
    }
    this->mAge = 0;
    this->mName = nullptr;
}

void CSampleClass::setName(char* pName)
{
    std::cout << "Calling CSampleClass::setName" << std::endl;
    if ((pName == nullptr) or (strlen(pName) == 0))
    {
        std::cout << "Input string is null....Please pass valid one" << std::endl;
        return;
    }

    if(this->mName == nullptr)
    {
        this->mName = (char *)malloc(strlen(pName) * sizeof(char));
    }
    memset(this->mName, 0, strlen(pName));
    memcpy((void*)(this->mName), (void*) pName, strlen(pName));
    this->mName[strlen(pName)] = '\0';
}

const char* CSampleClass::getName() const
{
    return this->mName;
}

void CSampleClass::setAge(unsigned int pAge)
{
    std::cout << "Calling CSampleClass::setAge" << std::endl;
    this->mAge = pAge;
}

unsigned int CSampleClass::getAge() const
{
    return this->mAge;
}

void CSampleClass::setClassName(char* pName)
{
    std::cout << "Calling CSampleClass::setClassName" << std::endl;
    this->mClassName = pName;
}

const char* CSampleClass::getClassName() const
{
    return this->mClassName;
}

void CSampleClass::printClassInfo()
{
    std::cout << this->mName << " is " << this->mAge << " years old"<< std::endl;
}

CSampleClass::CSampleClass(const CSampleClass& pClassObj)
{
    std::cout << "Copy Constructor called for " << pClassObj.getClassName() << std::endl;
    this->mName = (char *)malloc(strlen(pClassObj.getName()));
    memset(this->mName, 0, strlen(pClassObj.getName()));
    memcpy((void*)(this->mName), (void*) pClassObj.getName(), strlen(pClassObj.getName()));
    this->mName[strlen(pClassObj.getName())] = '\0';
    this->mAge = pClassObj.getAge();
}

CSampleClass& CSampleClass::operator=(const CSampleClass& pClassObj)
{
    std::cout << "Operator overloading called for " << this->getClassName() << std::endl;
    if (this->mName == nullptr)
    {
        this->mName = (char *)malloc(strlen(pClassObj.getName()));
        memset(this->mName, 0, strlen(pClassObj.getName()));
    }
    memcpy((void*)(this->mName), (void*) pClassObj.getName(), strlen(pClassObj.getName()));
    this->mName[strlen(pClassObj.getName())] = '\0';
    this->mAge = pClassObj.getAge();

    return *this;
}