#ifndef PIECES_H
#define PIECES_H


#include "user.h"
#include "plate.h"
using namespace std;
class Pieces
{
    Pieces(Id wob);
    Id wob1;
    void move(int row,int column,int row_prime,int column_prime);
};
#endif