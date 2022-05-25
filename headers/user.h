#ifndef USER_H
#define USER_H


#include "data.h"
#include "cell.h"

class User
{
public:
    User(Id id);
    Id id;
    bool check_win(Cells &cells);
};

#endif