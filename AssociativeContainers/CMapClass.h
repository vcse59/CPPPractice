#ifndef CMAPCLASS_H
#define CMAPCLASS_H

#include <map>
#include <string.h>

class CMapClass
{
public:
    CMapClass();
    ~CMapClass();
    
    bool insertValue(std::pair<std::string, int> pValue);
    bool insertValueAt(std::map<std::string, int>::iterator it, 
        std::pair<std::string, int> pValue);
    std::map<std::string, int>::iterator getIterator(std::string key);
    
    void printContainer();
private:
    std::map<std::string, int> *obj;
};

#endif // CMAPCLASS_H
