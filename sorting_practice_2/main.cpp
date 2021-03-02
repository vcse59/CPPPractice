#include <iostream>

#include "sorting.h"
#include "item.h"

using namespace std;

bool ascending(CItem arg1, CItem arg2)
{
    return (arg1.getValue() < arg2.getValue());
}

bool descending(CItem arg1, CItem arg2)
{
    return (arg1.getValue() > arg2.getValue());
}

int main(int argc, char* argv[])
{

    CItem itemArr[] = { 
                        CItem(23),
                        CItem(12),
                        CItem(45),
                        CItem(32),
                        CItem(89),
                        CItem(42),
                        CItem(76),
                        CItem(21),
                        CItem(101),
                    };
    unsigned int arrLength = sizeof(itemArr) / sizeof(itemArr[0]);

    CSorting<CItem> *sortPtr = new CSorting<CItem>(itemArr, arrLength);

    sortPtr->sortContainer(ascending);

    for (unsigned int nCount = 0; nCount < arrLength; nCount++)
    {
        cout << itemArr[nCount].getValue() << " ";
    }

    cout << endl;

    sortPtr->sortContainer(descending);

    for (unsigned int nCount = 0; nCount < arrLength; nCount++)
    {
        cout << itemArr[nCount].getValue() << " ";
    }

    cout << endl;
    return 0;
}
