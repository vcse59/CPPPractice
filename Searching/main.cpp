#include <iostream>
#include <algorithm>

using namespace std;

int arr[] = {3, 5, 6, 3, 8, 23, 12, 56, 24, 51};

int comparison(const void * item1, const void* item2)
{
    int val = 0;
    
    if (*((int*)item1) < *((int*)item2))
        val = -1;
    else if(*((int*)item1) > *((int*)item2))
        val = 1;
        
    return val;
}

int main(int argc, char **argv)
{
    unsigned int itemToBeFound = 23;
    unsigned int arrayLength = sizeof(arr) / sizeof(arr[0]);
    
    
    bool retVal = binary_search(arr, arr + arrayLength, itemToBeFound);
	if (retVal == true)
    {
        cout << itemToBeFound << " is found" << endl;
    }
    else{
        cout << itemToBeFound << " is not found" << endl;
    }
    
    int *retPtr = (int*)bsearch(&itemToBeFound, arr, arrayLength, 
            sizeof(arr[0]), &comparison);
	if (retPtr != nullptr)
    {
        cout << itemToBeFound << " is found" << endl;
    }
    else{
        cout << itemToBeFound << " is not found" << endl;
    }
    return 0;
}