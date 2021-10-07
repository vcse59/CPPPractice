#include <stdio.h>
#include "CSetClass.h"
#include "CMultiSetClass.h"
#include "CMapClass.h"
#include "CMultiMapClass.h"
#include <iostream>
#include <set>

using namespace std;

#define INSERTION_VALIDATION(val)   \
    if (val == true)    \
        cout << "Insertion operation is successful" << endl;    \
    else    \
        cout << "Insertion operation is failed" << endl;
   
void setExample()
{
    cout << "===================================" << endl;
    cout << "Demoing std::set " << endl;
    cout << "===================================" << endl;
    CSetClass *obj = new CSetClass();
    INSERTION_VALIDATION(obj->insertUniqueElement(5));
    INSERTION_VALIDATION(obj->insertUniqueElement(10));
    INSERTION_VALIDATION(obj->insertUniqueElement(15));
    INSERTION_VALIDATION(obj->insertUniqueElement(5));
    
    std::set<int>::iterator it = obj->getIterator(10);
    INSERTION_VALIDATION(obj->insertElementAt(it, 20));
    
    obj->printContainer();
    
    if (obj != nullptr)
        delete obj;
    obj = nullptr;
}  

void multisetExample()
{
    cout << "===================================" << endl;
    cout << "Demoing std::multiset " << endl;
    cout << "===================================" << endl;
    CMultiSetClass *obj = new CMultiSetClass();
    
    INSERTION_VALIDATION(obj->insertValue(5));
    INSERTION_VALIDATION(obj->insertValue(30));
    INSERTION_VALIDATION(obj->insertValue(50));
    INSERTION_VALIDATION(obj->insertValue(5));
    
    std::multiset<int>::iterator it = obj->getIterator(30);
    INSERTION_VALIDATION(obj->insertValueAt(it, 34));
    
    obj->printContainer();
    
    if (obj != nullptr)
        delete obj;
    obj = nullptr;
}   

void mapExample()
{
    cout << "===================================" << endl;
    cout << "Demoing std::map " << endl;
    cout << "===================================" << endl;
    CMapClass *obj = new CMapClass();
    
    INSERTION_VALIDATION(obj->insertValue(std::pair<std::string, int>("A", 65)));
    INSERTION_VALIDATION(obj->insertValue(std::pair<std::string, int>("C", 67)));
    INSERTION_VALIDATION(obj->insertValue(std::pair<std::string, int>("C", 68)));
    INSERTION_VALIDATION(obj->insertValue(std::pair<std::string, int>("B", 66)));
    INSERTION_VALIDATION(obj->insertValue(std::pair<std::string, int>("D", 68)));
    
    std::map<std::string, int>::iterator it = obj->getIterator("A");
    INSERTION_VALIDATION(obj->insertValueAt(it, std::pair<std::string, int>("E", 69)));
    
    obj->printContainer();
    
    if (obj != nullptr)
        delete obj;
    obj = nullptr;
}

void multiMapExample()
{
    cout << "===================================" << endl;
    cout << "Demoing std::multimap " << endl;
    cout << "===================================" << endl;
    CMultiMapClass *obj = new CMultiMapClass();
    
    INSERTION_VALIDATION(obj->insertValue(std::pair<std::string, int>("A", 65)));
    INSERTION_VALIDATION(obj->insertValue(std::pair<std::string, int>("C", 67)));
    INSERTION_VALIDATION(obj->insertValue(std::pair<std::string, int>("C", 68)));
    INSERTION_VALIDATION(obj->insertValue(std::pair<std::string, int>("B", 66)));
    INSERTION_VALIDATION(obj->insertValue(std::pair<std::string, int>("D", 68)));
    
    std::multimap<std::string, int>::iterator it = obj->getIterator("C");
    cout << "----" << it->second << endl;
    INSERTION_VALIDATION(obj->insertValueAt(it, std::pair<std::string, int>("E", 69)));
    
    obj->printContainer();
    
    if (obj != nullptr)
        delete obj;
    obj = nullptr;
}

int main(int argc, char **argv)
{
    setExample();
    multisetExample();
    mapExample();
    multiMapExample();
    return 0;
}
