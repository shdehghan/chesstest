#include "pieces.h"
#include <string>

Pieces::Pieces(char wob) : wob(wob){}

void Pieces::move(int row,int column,int row_prime,int column_prime)
{
    string piece1,piece2;
    piece2=plate[row_prime][column_prime];
    piece1=plate[row][column];
    plate[row][column]="--";
    plate[row_prime][column_prime]=piece1;

}