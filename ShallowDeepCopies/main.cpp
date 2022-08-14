#include <iostream>
#include "Deep.h"
#include "Shallow.h"

using std::cout;
using std::endl;

void display_deep(Deep d);
void display_shallow(Shallow s);

int main()
{
    Deep obj1(100);
    display_deep(obj1);

    Deep obj2(obj1);
    obj2.set_data(1000);
    //Shallow should cause an error but it doesn't
   /*  Shallow obj1(100);
    display_shallow(obj1);

    Shallow obj2(obj1);
    obj2.set_data(1000); */

    return 0;
}

void display_deep(Deep d)
{
    cout << d.get_data() << "\n";
}

void display_shallow(Shallow s)
{
    cout << s.get_data() << "";
}