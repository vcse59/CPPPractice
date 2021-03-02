#include "sorting.h"
#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
CSorting<T>::CSorting(T *pContainerPtr, unsigned int pContainerLength)
    :mContainerPtr(pContainerPtr), mContainerLength(pContainerLength)
{
    cout << "CSorting::CSorting" << endl;
}

template <class T>
CSorting<T>::~CSorting()
{
    cout << "CSorting::~CSorting" << endl;
}

template <class T>
void CSorting<T>::sortContainer(bool (*funcptr) (T t1, T t2))
{
    cout << "CSorting::sortContainer" << endl;
    sort(this->mContainerPtr, this->mContainerPtr + this->mContainerLength, funcptr);
}
