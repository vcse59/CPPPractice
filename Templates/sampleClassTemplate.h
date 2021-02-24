#ifndef _SAMPLE_CLASS_TEMPLATE_H_
#define _SAMPLE_CLASS_TEMPLATE_H_

#include <string>

template <class T1, class T2, unsigned int size>
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

#include "sampleClassTemplate.cpp"

#endif