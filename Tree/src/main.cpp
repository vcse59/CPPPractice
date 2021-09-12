#include <iostream>
#include "node.h"
#include "container.h"

using namespace std;
using namespace Tree;

int main(int argv, char* argc[])
{
    Container *cont = new Container();

    cont->insert(new CNode(83));
    cont->insert(new CNode(23));
    cont->insert(new CNode(53));
    cont->insert(new CNode(33));
    cont->insert(new CNode(73));
    cont->insert(new CNode(93));

    cont->printContainer();

    return 0;
}
