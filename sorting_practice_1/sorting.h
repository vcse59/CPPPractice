class CSorting
{
    public:
        CSorting(unsigned int* arrayContainer,
                unsigned int containerLength);

        ~CSorting();

        void sortContainer(bool sortdescending = false);
        void printArray();
    
    private:
        unsigned int *arrayContainer;
        unsigned int arrayLength;

        CSorting (const CSorting& obj);
        CSorting& operator=(const CSorting& obj);    
};
