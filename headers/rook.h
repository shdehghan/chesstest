#ifndef ROOK_H
#define ROOK_H
#include "pieces.h"


class Rook
{
    Rook(int i,int j,Id wob_rook);
    Id wob_rook;
    int row;
    int  column;
    void move();
    void valid(int row,int column,Id wob_rook);
};
#endif