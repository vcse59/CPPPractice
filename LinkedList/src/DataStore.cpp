#include <iostream>
#include <cstdlib>
#include "DataStore.h"

using namespace std;
using namespace DataStructure;

DataStore::DataStore(int pValue)
{
    cout << "DataStore::DataStore(int pValue)" << endl;
    mValue.intData = new unsigned int(pValue);
    type = DataStructure::dataType::INTEGER;
    id = rand();
}

DataStore::DataStore(std::string pValue)
{
    cout << "DataStore::DataStore(std::string pValue)" << endl;
    mValue.stringData = new std::string(pValue);
    type = DataStructure::dataType::STRING;
    id = rand();
}

DataStore::~DataStore()
{
    cout << "DataStore::~DataStore()" << endl;

    if (type == DataStructure::dataType::INTEGER)
        delete mValue.intData;
    else
        delete mValue.stringData;
}

DataStore::DataStore(const DataStore& other)
{
    cout << "DataStore::DataStore(const DataStore& other)" << endl;
    if (other.type == DataStructure::dataType::INTEGER)
       {
            mValue.intData = new unsigned int(*(other.mValue.intData));
            type = other.type;
            id = other.id;
       } 
    else
       {
            mValue.stringData = new std::string(*(other.mValue.stringData));
            type = other.type;
            id = other.id;
       } 
}