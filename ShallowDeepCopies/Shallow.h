#ifndef _SHALLOW_H
#define _SHALLOW_H

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


#endif