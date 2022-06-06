#ifndef BISHOP_H
#define BISHOP_H
#include "pieces.h"

class Bishop
{
    Bishop(int i,int j,Id wob_bishop);
    int row;
    int column;
    Id wob_bishop;
    void move();
    vector<vector<bool>> valid();
};
#endif