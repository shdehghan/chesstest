#ifndef KING_H
#define KING_H
#include "pieces.h"

class King
{
public:
    King(int i,int j,Id wob_king);
    int row;
    int column;
    Id wob_king;
    void move();
    void valid();
};
#endif