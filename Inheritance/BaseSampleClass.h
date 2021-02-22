#ifndef __BASE_SAMPLE_CLASS__
#define __BASE_SAMPLE_CLASS__

class CBaseSampleClass
{
    public:
        CBaseSampleClass(const char* className);
        virtual ~CBaseSampleClass();

        virtual void draw();
        virtual const char* getClassName() const;
        virtual void setClassName(const char* pClassName);
        
    protected:
        const char* mClassName;

    private:
        CBaseSampleClass(const CBaseSampleClass& pObj);
        CBaseSampleClass& operator=(const CBaseSampleClass& pObj);
};
#endif