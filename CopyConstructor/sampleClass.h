class CSampleClass
{
    public:
        CSampleClass(char* className);
        ~CSampleClass();

        void setName(char* pName);
        const char* getName() const;

        void setAge(unsigned int pAge);
        unsigned int getAge() const;

        void setClassName(char* pName);
        const char* getClassName() const;
        
        void printClassInfo();
    
        CSampleClass(const CSampleClass& pClassObj);
        CSampleClass& operator=(const CSampleClass& pClassObj);

    private:

        char    *mName;
        unsigned int     mAge;    
        char    *mClassName; 
};