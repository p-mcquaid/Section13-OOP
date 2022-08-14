#ifndef _MOVE_H_
#define _MOVE_H_
class Move
{
private:
    int *data;

public:
    void set_data_value(int);
    int get_data_value();
    Move(int d);
    Move(const Move &source);
    Move(Move &&source)noexcept;
    ~Move();
};

#endif