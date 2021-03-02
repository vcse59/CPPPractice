#ifndef _SORTING_H_
#define _SORTING_H_

template <class T>
class CSorting
{
    public:
        CSorting(T *pContainerPtr, unsigned int containerLength);
        ~CSorting();

        void sortContainer(bool (*funcptr) (T t1, T t2));

    private:
        T* mContainerPtr;
        unsigned int mContainerLength;
};

//#include "sorting.cpp"

#endif
