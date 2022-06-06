#ifndef QUEEN_H
#define QUEEN_H
#include "pieces.h"


class Queen
{
public:
    Queen(int i,int j,Id wob_queen);
    int row;
    int column;
    Id wob_queen;
    void move();
    vector<vector<bool>> valid();
};
#endif