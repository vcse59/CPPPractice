#include "functionTemplates.cpp"
#include <string>

template int maximum<int>(int, int);
template float maximum<float>(float, float);
template double maximum<double>(double, double);
template std::string maximum<std::string>(std::string, std::string);

template int addition<int>(int, int);
template float addition<float>(float, float);
template double addition<double>(double, double);
template std::string addition<std::string>(std::string, std::string);
template <>
char* addition<char*>(char* arg1, char* arg2)
{
    char* retPtr = strcat(arg1, arg2);

    return retPtr;
}