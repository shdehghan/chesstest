#include "pieces.h"
#include <string>
using namespace std;
Pieces::Pieces(Id wob) : wob1(wob){}

void Pieces::move(int row,int column,int row_prime,int column_prime)
{
    string piece1,piece2;
    vector<vector<string>> plate1;
    plate1.resize(8);
    for (int row=0;row<8;row++)
    {
        plate1[row].resize(8);
    }
    Plate Plate2;
    Plate2.vectorSaz(Plate2.plate);
    for (int i=0;i<8;i++)
    {
        for (int j=0;j<8;j++)
        {
            plate1[i][j]=Plate2.plate[i][j];
        }
    }
    piece2=plate1[row_prime][column_prime];
    piece1=plate1[row][column];
    plate1[row][column]="--";
    plate1[row_prime][column_prime]=piece1;

}