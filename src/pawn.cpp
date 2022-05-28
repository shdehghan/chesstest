#include "pawn.h"
#include "plate.h"


Pawn::Pawn(int i,int j,bool tof,Id Wob_pawn):row(i),column(j),start(tof),wob_pawn(wob_pawn){}
void Pawn::valid(bool start)
{
    Plate valid_plate1;
    Plate plate_asli;
    plate_asli.vectorSaz(plate_asli.plate);
    valid_plate1.validPlateSaz(valid_plate1.valid_plate);
    if (start=false)
    {
        if (wob_pawn==B)
        {
            valid_plate1.valid_plate[row+1][column]=true;
            valid_plate1.valid_plate[row+2][column]=true;
        }
        else
        {
            valid_plate1.valid_plate[row-1][column]=true;
            valid_plate1.valid_plate[row-2][column]=true;
        }
    }
    else
    {
        if (wob_pawn==B)
        {
            if (plate_asli.plate[row+1][column+1]!="--")
            {
                valid_plate1.valid_plate[row+1][column+1]==true;
            }
            if (plate_asli.plate[row+1][column-1]!="--")
            {
                valid_plate1.valid_plate[row+1][column-1]==true;
            }
            valid_plate1.valid_plate[row+1][column]==true;
        }
        else
        {
            if (plate_asli.plate[row-1][column+1]!="--")
            {
                valid_plate1.valid_plate[row-1][column+1]==true;
            }
            if (plate_asli.plate[row-1][column-1]!="--")
            {
                valid_plate1.valid_plate[row-1][column-1]==true;
            }
            valid_plate1.valid_plate[row-1][column]==true;
        }
    }
}
