#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>

#include "sorting.h"

using namespace std;

CSorting::CSorting(unsigned int* arrayContainer,
    unsigned int arrayLength)
    {
        cout << "CSorting::CSorting" << endl;
        this->arrayContainer = arrayContainer;
        this->arrayLength = arrayLength;
    }

CSorting::~CSorting()
{
    cout << "CSorting::~CSorting" << endl;
}

void CSorting::sortContainer(bool sortDescendingOrder)
{
    cout << "CSorting::sortContainer" << endl;
    if (sortDescendingOrder == false)
    {
        // sorting array values in ascending order
        cout << "Sorting array in ascending order : " << endl;
        sort(this->arrayContainer, (this->arrayContainer + this->arrayLength));
    }
    else
    {
        // sorting array values in descending order
        cout << "Sorting array in descending order : " << endl;
        sort(this->arrayContainer, this->arrayContainer + this->arrayLength, 
            greater<unsigned int>());
    }
}

void CSorting::printArray()
{
    cout << "CSorting::printArray" << endl;
    for (unsigned int nCount = 0; nCount < this->arrayLength ; ++nCount)
    {
        cout << this->arrayContainer[nCount] << " ";
    }
    cout << endl;
}
