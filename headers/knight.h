#ifndef KNIGHT_H
#define KNIGHT_H
#include "pieces.h"

class Knight
{
public:
    Knight(int i,int j,Id wob_knight);
    int row;
    int column;
    Id wob_knight;
    void move();
    vector<vector<bool>> valid();
};
#endif