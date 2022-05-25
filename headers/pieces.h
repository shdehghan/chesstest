#ifndef PIECES_H
#define PIECES_H


#include "user.h"
using namespace std;
class Pieces
{
    Pieces(char wob);
    Id wob;
    void move(int row,int column,int row_prime,int column_prime);
};
#endif