#include <iostream>
#include <stdio.h>

#include "SampleClass.h"
using namespace std;

CSampleClass::CSampleClass()
{
    cout << "Calling constructor" << endl;
}

CSampleClass::~CSampleClass()
{
    cout << "Calling destructor" << endl;
}

void CSampleClass::setNum(int pNum)
{
    cout << "Calling CSampleClass::setNum" << endl;
    mNum = pNum;
}

int CSampleClass::getNum() const
{
    cout << "Calling CSampleClass::getNum" << endl;
    return this->mNum;
}
        
CSampleClass CSampleClass::operator+(const CSampleClass& arg1) const
{
    cout << "Calling operator +" << endl;
    CSampleClass temp;
    temp.setNum(this->getNum() + arg1.getNum());
    return temp;
}

CSampleClass CSampleClass::operator-(const CSampleClass& arg1) const
{
    cout << "Calling operator -" << endl;
    CSampleClass temp;
    temp.setNum(this->getNum() - arg1.getNum());
    return temp;
}

CSampleClass CSampleClass::operator/(const CSampleClass& arg1) const
{
    cout << "Calling operator /" << endl;
    CSampleClass temp;
    temp.setNum(this->getNum() / arg1.getNum());
    return temp;
}

CSampleClass CSampleClass::operator%(const CSampleClass& arg1) const
{
    cout << "Calling operator %" << endl;
    CSampleClass temp;
    temp.setNum(this->getNum() % arg1.getNum());
    return temp;
}

CSampleClass CSampleClass::operator^(const CSampleClass& arg1) const
{
    cout << "Calling operator ^" << endl;
    CSampleClass temp;
    temp.setNum(this->getNum() ^ arg1.getNum());
    return temp;
}

CSampleClass CSampleClass::operator&(const CSampleClass& arg1) const
{
    cout << "Calling operator &" << endl;
    CSampleClass temp;
    temp.setNum(this->getNum() & arg1.getNum());
    return temp;
}

CSampleClass CSampleClass::operator|(const CSampleClass& arg1) const
{
    cout << "Calling operator |" << endl;
    CSampleClass temp;
    temp.setNum(this->getNum() | arg1.getNum());
    return temp;
}

CSampleClass CSampleClass::operator*(const CSampleClass& arg1) const
{
    cout << "Calling operator *" << endl;
    CSampleClass temp;
    temp.setNum(this->getNum() * arg1.getNum());
    return temp;
}

CSampleClass& CSampleClass::operator=(const CSampleClass& arg1)
{
    cout << "Calling operator =" << endl;
    this->setNum(arg1.getNum());
    return *this;
}

void CSampleClass::print()
{
    cout << "Number : " << this->getNum() << endl;
}

CSampleClass CSampleClass::operator~() const
{
    cout << "Calling unary operator~" << endl;
    CSampleClass sampleClassObj;
    sampleClassObj.setNum(~(this->mNum));

    return sampleClassObj;
}

CSampleClass CSampleClass::operator+() const
{
    cout << "Calling unary operator+" << endl;
    CSampleClass sampleClassObj;
    int val = +(this->getNum());
    sampleClassObj.setNum(val);

    return sampleClassObj;
}

CSampleClass CSampleClass::operator-() const
{
    cout << "Calling unary operator-" << endl;
    CSampleClass sampleClassObj;
    int val = -(this->getNum());
    sampleClassObj.setNum(val);

    return sampleClassObj;
}

CSampleClass CSampleClass::operator!() const
{
    cout << "Calling unary operator!" << endl;
    CSampleClass sampleClassObj;
    int val = !(this->getNum());
    sampleClassObj.setNum(val);

    return sampleClassObj;
}