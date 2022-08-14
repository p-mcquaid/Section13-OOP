#include "Move.h"
#include <iostream>

using std::cout;

void Move::set_data_value(int d)
{
    *data = d;
}

int Move::get_data_value()
{
    return *data;
}

Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "Contructor for " << d << "\n";
}

Move::Move(const Move &source)
    : Move{*source.data}
{
    cout << "Copy Contructor - deep copy for " << *data << "\n";
}

Move::Move(Move &&source) noexcept
    : data{source.data}
{
    source.data = nullptr;
    cout << "Move Contructor - moving resource " << *data << "\n";
}

Move::~Move()
{
    if (data != nullptr)
    {
        cout << "Destructor freeing data for " << *data << "\n";
    }
    else
    {
        cout << "Destructor freeing data for nullptr\n";
    }
    delete data;
    
}