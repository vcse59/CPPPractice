#include <stdio.h>
#include "CStackClass.h"
#include <iostream>

using namespace std;

void StackExample()
{
    CStackClass *obj = new CStackClass();
    obj->pushValue(2);
    obj->pushValue(34);
    obj->pushValue(54);
    
    cout << "Length of stack : " << obj->getLength() << endl;
    obj->pushValue(54);
    cout << "Length of stack : " << obj->getLength() << endl;
    if (obj != nullptr)
        delete obj;
    obj = nullptr;
}

int main(int argc, char **argv)
{
    StackExample();
	return 0;
}
