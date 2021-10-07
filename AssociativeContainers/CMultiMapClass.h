#ifndef CMULTIMAPCLASS_H
#define CMULTIMAPCLASS_H
#include <map>

class CMultiMapClass
{
public:
    CMultiMapClass();
    ~CMultiMapClass();

    bool insertValue(std::pair<std::string, int> pValue);
    bool insertValueAt(std::multimap<std::string, int>::iterator it, 
        std::pair<std::string, int> pValue);
    std::multimap<std::string, int>::iterator getIterator(std::string key);
    
    void printContainer();
private:
    std::multimap<std::string, int> *obj;

};

#endif // CMULTIMAPCLASS_H
