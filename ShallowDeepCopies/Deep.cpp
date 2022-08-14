#include "Deep.h"
#include <iostream>

using std::cout;

Deep::Deep(int d)
{
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)
    : Deep{*source.data}
{
    cout << "Copy constuctor - Deep Copy" << "\n";
}

Deep::~Deep()
{
    delete data;
    cout << "Destructor freeing data" << "\n";
}
