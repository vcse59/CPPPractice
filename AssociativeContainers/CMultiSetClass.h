#ifndef CMULTISETCLASS_H
#define CMULTISETCLASS_H

#include <set>

class CMultiSetClass
{
public:
    CMultiSetClass();
    ~CMultiSetClass();
    
    bool insertValue(int pNum);
    bool insertValueAt(const std::multiset<int>::iterator& it, int pNum);
    std::multiset<int>::iterator getIterator(int pNum);
    
    void printContainer();
    
private:
    std::multiset<int> *multiSet;

};

#endif // CMULTISETCLASS_H
