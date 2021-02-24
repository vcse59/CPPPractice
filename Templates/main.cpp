#include <iostream>
#include <stdio.h>
#include <string.h>
#include "functionTemplates.h"
#include "sampleClassTemplate.h"

using namespace std;

void functionTemplate()
{
    cout << "Maximum int value : " << maximum<int>(10, 6) << endl;
    cout << "Maximum float value : " << maximum<float>(14.0, 24.0) << endl;
    cout << "Maximum double value : " << maximum<double>(40.0, 35.0) << endl;
    cout << "Maximum string value : " << maximum<string>("Vivek", "Anjali") << endl;

    cout << "Addition int value : " << addition<int>(10, 6) << endl;
    cout << "Addition float value : " << addition<float>(14.0, 24.0) << endl;
    cout << "Addition double value : " << addition<double>(40.0, 35.0) << endl;
    cout << "Addition string value : " << addition<string>("Vivek", "Anjali") << endl;
    
    char *arg1Ptr = (char*)"Vivek";
    char *arg1 = new char[strlen(arg1Ptr)];
    strcpy(arg1, arg1Ptr);

    char *arg2Ptr = (char*)"Anjali";
    char *arg2 = new char[strlen(arg2Ptr)];
    strcpy(arg2, arg2Ptr);
        
    char* charCat = addition<char*>(arg1, arg2);
    cout << "Addition char pointer value : " << charCat << endl;

    if (arg1 == nullptr)
        delete arg1;
    if (arg2 == nullptr)
        delete arg2;
    arg1 = arg2 = nullptr;
}

void classTemplate()
{
    sampleClassTemplate<int, int, 100> *obj1 = new sampleClassTemplate<int, int, 100>(4, 5);
    obj1->printObjectInfo();

    if (obj1 != nullptr)
    {
        delete obj1;
    }
    obj1 = nullptr;
}

int main(int argv, char* argc[])
{
    functionTemplate();
    classTemplate();
    return 0;
}