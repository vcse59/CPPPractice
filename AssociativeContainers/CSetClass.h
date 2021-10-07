#ifndef CSETCLASS_H
#define CSETCLASS_H

#include <set>

class CSetClass
{
public:
    CSetClass();
    ~CSetClass();
    
    bool insertUniqueElement(int pNum);
    bool insertElementAt(const std::set<int>::iterator& it, int pNum);
    const std::set<int>::iterator getIterator(int pNum);
    void printContainer();
    
private:
    std::set<int>* mSetContainer;
};

#endif // CSETCLASS_H
