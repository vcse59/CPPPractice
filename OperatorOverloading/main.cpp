#include <iostream>
#include <stdio.h>

#include "SampleClass.h"

using namespace std;

void BinaryOperatorOverloading()
{
    CSampleClass *obj1 = new CSampleClass();
    obj1->setNum(7);
    CSampleClass *obj2 = new CSampleClass();
    obj2->setNum(3);

    CSampleClass obj3;
    obj3 = *obj1 + *obj2;
    obj3.print();

    // Operator + overloading
    cout << "Demonstrating operator+ overloading" << endl;
    cout << "====================================="<<endl;
    CSampleClass *obj4 = new CSampleClass();
    *obj4 = *obj1 + *obj2;
    obj4->print();

    // Operator - overloading
    cout << "Demonstrating operator- overloading" << endl;
    cout << "====================================="<<endl;
    CSampleClass *obj5 = new CSampleClass();
    *obj5 = *obj1 - *obj2;
    obj5->print();

    // Operator * overloading
    cout << "Demonstrating operator* overloading" << endl;
    cout << "====================================="<<endl;
    CSampleClass *obj6 = new CSampleClass();
    *obj6 = (*obj1) * (*obj2);
    obj6->print();

    // Operator / overloading
    cout << "Demonstrating operator/ overloading" << endl;
    cout << "====================================="<<endl;
    CSampleClass *obj7 = new CSampleClass();
    *obj7 = (*obj1) / (*obj2);
    obj7->print();

    // Operator % overloading
    cout << "Demonstrating operator% overloading" << endl;
    cout << "====================================="<<endl;
    CSampleClass *obj8 = new CSampleClass();
    *obj8 = (*obj1) % (*obj2);
    obj8->print();

    // Operator ^ overloading
    cout << "Demonstrating operator^ overloading" << endl;
    cout << "====================================="<<endl;
    CSampleClass *obj9 = new CSampleClass();
    *obj9 = (*obj1) ^ (*obj2);
    obj9->print();

    // Operator & overloading
    cout << "Demonstrating operator& overloading" << endl;
    cout << "====================================="<<endl;
    CSampleClass *obj10 = new CSampleClass();
    *obj10 = (*obj1) & (*obj2);
    obj10->print();

    // Operator | overloading
    cout << "Demonstrating operator| overloading" << endl;
    cout << "====================================="<<endl;
    CSampleClass *obj11 = new CSampleClass();
    *obj11 = (*obj1) | (*obj2);
    obj11->print();

    free(obj1);
    free(obj2);
    free(obj4);
    free(obj5);
    free(obj6);
    free(obj7);
    free(obj8);
    free(obj9);
    free(obj10);
    free(obj11);
}

void UnaryOperatorOverloading()
{
    CSampleClass *obj1 = new CSampleClass();
    obj1->setNum(7);
   
    // Operator ~ overloading
    cout << "Demonstrating unary operator~ overloading" << endl;
    cout << "====================================="<<endl;
    CSampleClass obj2;
    obj2 = ~(*obj1);
    obj2.print();

    // Operator + overloading
    cout << "Demonstrating unary operator+ overloading" << endl;
    cout << "====================================="<<endl;
    CSampleClass obj3;
    obj3 = +(obj2);
    obj3.print();

    // Operator - overloading
    cout << "Demonstrating unary operator- overloading" << endl;
    cout << "====================================="<<endl;
    CSampleClass obj4;
    obj4 = -(obj3);
    obj4.print();

    // Operator ! overloading
    cout << "Demonstrating unary operator! overloading" << endl;
    cout << "====================================="<<endl;
    CSampleClass obj5;
    obj5 = !(obj4);
    obj5.print();
}

int main(int argc, char *argv[])
{
    BinaryOperatorOverloading();
    UnaryOperatorOverloading();   
    return 0;
}