#ifndef _DEEP_H_
#define _DEEP_H_

class Deep
{
private:
    int *data;

public:
    void set_data(int d) { *data = d; }
    int get_data() { return *data; }
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

#endif