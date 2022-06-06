#ifndef ROOK_H
#define ROOK_H
#include "pieces.h"


class Rook
{
    public:
        Rook(int i,int j,Id wob_rook);
        Id wob_rook;
        int row;
        int  column;
        void move();
        vector<vector<bool>> valid();
};
#endif