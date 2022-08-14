#include "Shallow.h"
#include <iostream>

using std::cout;

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    : data{source.data}
{
    cout << "Copy Constructor - shallow copy" << "\n";
}

Shallow::~Shallow()
{
    delete data;
    cout << "Destructor freeing data" << "\n";
}
