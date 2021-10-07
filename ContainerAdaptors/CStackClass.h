#ifndef CSTACKCLASS_H
#define CSTACKCLASS_H
#include <stack>
#include <vector>

class CStackClass
{
public:
    CStackClass();
    ~CStackClass();
    
    void pushValue(int pNum);
    void popValue();
    
    int getLength();
    
    private:
    std::stack<int, std::vector<int>> *obj;
};

#endif // CSTACKCLASS_H
