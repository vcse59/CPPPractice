#include <iostream>
#include <stdio.h>

#include "BaseSampleClass.h"
#include "DerivedSampleClass.h"

using namespace std;

int main(int argc , char *argv[])
{
    // Instantiating base class
    cout << "Instantiating base class" << endl;
    cout << "=========================================================" << endl;
    CBaseSampleClass *baseObj1 = new CBaseSampleClass("BaseClass");
    baseObj1->draw();

    if (baseObj1 != nullptr)
    {
        delete baseObj1;
    }
    baseObj1 = nullptr;

    // Instantiating derived class
    cout << "Instantiating Derived class" << endl;
    cout << "=========================================================" << endl;
    CDerivedSampleClass *derivedObj1 = new CDerivedSampleClass("DerivedClass");
    derivedObj1->draw();
    
    if (derivedObj1 != nullptr)
    {
        delete derivedObj1;
    }
    derivedObj1 = nullptr;

    // Instantiating derived class
    cout << "Instantiating Derived class and assigning to base class type" << endl;
    cout << "=========================================================" << endl;
    CDerivedSampleClass *derivedObj2 = new CDerivedSampleClass("DerivedClass");
    derivedObj2->draw();

    CBaseSampleClass *baseClassObj2 = derivedObj2;
    baseClassObj2->draw();
    
    if (baseClassObj2 != nullptr)
    {
        delete baseClassObj2;
    }
    baseClassObj2 = nullptr;
    return 0;
}