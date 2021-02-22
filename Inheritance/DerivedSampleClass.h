#ifndef __DERIVED_SAMPLE_CLASS__
#define __DERIVED_SAMPLE_CLASS__

#include "BaseSampleClass.h"

class CDerivedSampleClass : public CBaseSampleClass
{
    public:
        CDerivedSampleClass(const char* pClassName);
        ~CDerivedSampleClass();

        void draw();
        const char* getClassName() const;
        void setClassName(const char* pClassName);
        
    private:
        CDerivedSampleClass(const CDerivedSampleClass& pObj);
        CDerivedSampleClass& operator=(const CDerivedSampleClass& pObj);
};
#endif