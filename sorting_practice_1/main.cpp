#include <iostream>
#include "sorting.h"

using namespace std;

int main (int argc, char* argv[])
{
    unsigned int arr[] = {17, 23, 2, 7, 89, 65, 32, 75, 110};
    unsigned int arraySize = sizeof(arr) / sizeof(arr[0]);

    CSorting *obj = new CSorting(arr, arraySize);

    obj->sortContainer();
    obj->printArray();

    obj->sortContainer(true);
    obj->printArray();

    if (obj != nullptr)
        delete obj;
    obj = nullptr;
    return 0;
}
