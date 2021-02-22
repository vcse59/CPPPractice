#include <iostream>
#include <stdio.h>
#include "sampleClass.h"

int main(int argc, char* argv[])
{

    // Instantiating CSampleClass class
    CSampleClass obj1((char*)"sample1");
    obj1.setName((char*)"Vivek");
    obj1.setAge(33);
    obj1.printClassInfo();

    // Operator overloading
    std::cout << "Demonstrating operator overloading" << std::endl;
    CSampleClass obj2((char*)"sample2");
    obj2 = obj1;
    obj2.setName((char*)"Anjali");
    obj2.printClassInfo();

    //Copy constructor Parametrized
    std::cout << "Demonstrating copy constructor using parametrized form" << std::endl;
    CSampleClass obj3(obj1);
    obj3.setClassName((char*)"Sample2");
    obj3.setName((char*)"Atharv");
    obj3.setAge(3);
    obj3.printClassInfo();

    std::cout << "Demonstrating copy constructor using assignment operator" << std::endl;
    CSampleClass obj4 = obj1;
    obj4.setClassName((char*)"Sample3");
    obj4.setName((char*)"Anvi");
    obj4.setAge(1);
    obj4.printClassInfo();
}