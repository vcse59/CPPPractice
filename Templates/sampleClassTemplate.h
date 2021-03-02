#ifndef _SAMPLE_CLASS_TEMPLATE_H_
#define _SAMPLE_CLASS_TEMPLATE_H_

#include <string>
#include <string.h>

template <class T1, class T2, unsigned int pSize>
class sampleClassTemplate
{
    public: 
        sampleClassTemplate(T1 pParam1, T2 pParam2);
        ~sampleClassTemplate();

        void printObjectInfo();


    private:
        T1 mParam1;
        T2 mParam2;
        unsigned int mSize;

        sampleClassTemplate(const sampleClassTemplate& obj);
        sampleClassTemplate& operator=(const sampleClassTemplate& obj);
};

template <unsigned int pSize>
class sampleClassTemplate<std::string, std::string, pSize>
{
    public: 
        sampleClassTemplate(std::string pParam1, std::string pParam2);
        ~sampleClassTemplate();

        void printObjectInfo();


    private:
        std::string mParam1;
        std::string mParam2;
        unsigned int mSize;

        sampleClassTemplate(const sampleClassTemplate& obj);
        sampleClassTemplate& operator=(const sampleClassTemplate& obj);
};
//#include "sampleClassTemplate.cpp"

#endif