#include <math.h>
#include <string>
#include <string.h>
#include <iostream>

using namespace std;
template <typename T>
T maximum(T arg1, T arg2)
{
    return max(arg1, arg2);
}

template <typename T>
T addition(T arg1, T arg2)
{
    return (arg1 + arg2);
}

template <>
char* addition<char*>(char* arg1, char* arg2)
{
    char* retPtr = strcat(arg1, arg2);

    return retPtr;
}