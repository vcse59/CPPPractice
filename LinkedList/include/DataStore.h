#ifndef __DATA_H__
#define __DATA_H__

#include <string>

namespace DataStructure
{
    union dataContainer{
    public:

        unsigned int *intData;
        std::string *stringData;

        dataContainer(){}
        ~dataContainer(){}
    };

    enum dataType{
            INTEGER,
            FLOAT,
            STRING
    };

    class DataStore{
        public:
            union DataStructure::dataContainer mValue;
            enum DataStructure::dataType type;
            unsigned int id;
            DataStore(int pValue);
            DataStore(std::string pValue);
            ~DataStore();

            unsigned int getNodeId() const
            {
                return id;
            }

            DataStore(const DataStore& other);
    };
};

#endif