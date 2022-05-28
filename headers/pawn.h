#ifndef PAWN_H
#define PAWN_H
#include "pieces.h"


class Pawn
{
    Pawn(int i,int j,bool tof, Id wob_pawn);
    int row;
    int column;
    bool start;
    Id wob_pawn;
    Pieces pawn1(Id wob_pawn);
    void move();
    void valid(bool start);

};
#endif