#include "LkedListClass.h"
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    LinkedList a;
    a.addNode(2);
    a.addNode(4);
    a.addNode(12);
    a.display();

    a.deleteNode(2);

    a.display();
    return 0;
}
