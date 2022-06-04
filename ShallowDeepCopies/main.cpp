
#include <iostream>

using std::cout;
using std::endl;

class Deep
{
private:
    int *data;
public:
    void set_data(int d) { *data = d; }
    int get_data() { return *data; }
    void display_deep();
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

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
    cout << "Destructor freeing data" << endl;
}

class Shallow
{
private:
    int *data;

public:

    void set_data(int d) { *data = d; }
    int get_data() { return *data; }
    Shallow(int d);
    Shallow(const Shallow &source);
    ~Shallow();
};

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    : data{source.data}
{
    cout << "Copy Constructor - shallow copy" << endl;
}

Shallow::~Shallow()
{
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s)
{
    cout << s.get_data() << endl;
}

void display_deep(Deep d)
{
    cout << d.get_data() << "\n";
}

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