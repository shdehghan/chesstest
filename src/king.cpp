#include "king.h"
#include "plate.h"


King::King(int i,int j,Id wob_king):row(i),column(j),wob_king(wob_king){}
void valid(int row,int column,Id wob_king)
{
    Plate valid_plate1;
    Plate plate_asli;
    plate_asli.vectorSaz(plate_asli.plate);
    valid_plate1.validPlateSaz(valid_plate1.valid_plate);
    if (row+1<8)
    {
        if (plate_asli.plate[row+1][column]=="--")
        {
            valid_plate1.valid_plate[row+1][column]=true;
        }
        else
        {
            if (wob_king==B)
            {
                if (plate_asli.plate[row+1][column][1]=='w')
                {
                    valid_plate1.valid_plate[row+1][column]=true;
                }
            }
            else
            {
                if (plate_asli.plate[row+1][column][1]=='B')
                {
                    valid_plate1.valid_plate[row+1][column]=true;
                }
            }
        }
    }
    if (row-1>=0)
    {
        if (plate_asli.plate[row-1][column]=="--")
        {
            valid_plate1.valid_plate[row-1][column]=true;
        }
        else
        {
            if (wob_king==B)
            {
                if (plate_asli.plate[row-1][column][1]=='w')
                {
                    valid_plate1.valid_plate[row-1][column]=true;
                }
            }
            else
            {
                if (plate_asli.plate[row-1][column][1]=='B')
                {
                    valid_plate1.valid_plate[row-1][column]=true;
                }
            }
        }
    }
    if (column+1<8)
    {
        if (plate_asli.plate[row][column+1]=="--")
        {
            valid_plate1.valid_plate[row][column+1]=true;
        }
        else
        {
            if (wob_king==B)
            {
                if (plate_asli.plate[row][column+1][1]=='w')
                {
                    valid_plate1.valid_plate[row][column+1]=true;
                }
            }
            else
            {
                if (plate_asli.plate[row][column+1][1]=='B')
                {
                    valid_plate1.valid_plate[row][column+1]=true;
                }
            }
        }
    }
    if (column-1>=0)
    {
        if (plate_asli.plate[row][column-1]=="--")
        {
            valid_plate1.valid_plate[row][column-1]=true;
        }
        else
        {
            if (wob_king==B)
            {
                if (plate_asli.plate[row][column-1][1]=='w')
                {
                    valid_plate1.valid_plate[row][column-1]=true;
                }
            }
            else
            {
                if (plate_asli.plate[row][column-1][1]=='B')
                {
                    valid_plate1.valid_plate[row][column-1]=true;
                }
            }
        }
    }
    if (column+1<8 && row+1<8)
    {
        if (plate_asli.plate[row+1][column+1]=="--")
        {
            valid_plate1.valid_plate[row+1][column+1]=true;
        }
        else
        {
            if (wob_king==B)
            {
                if (plate_asli.plate[row+1][column+1][1]=='w')
                {
                    valid_plate1.valid_plate[row+1][column+1]=true;
                }
            }
            else
            {
                if (plate_asli.plate[row+1][column+1][1]=='B')
                {
                    valid_plate1.valid_plate[row+1][column+1]=true;
                }
            }
        }
    }
    if (column+1<8 && row-1>=0)
    {
        if (plate_asli.plate[row-1][column+1]=="--")
        {
            valid_plate1.valid_plate[row-1][column+1]=true;
        }
        else
        {
            if (wob_king==B)
            {
                if (plate_asli.plate[row-1][column+1][1]=='w')
                {
                    valid_plate1.valid_plate[row-1][column+1]=true;
                }
            }
            else
            {
                if (plate_asli.plate[row-1][column+1][1]=='B')
                {
                    valid_plate1.valid_plate[row-1][column+1]=true;
                }
            }
        }
    }
    if (column-1>=0 && row+1<8)
    {
        if (plate_asli.plate[row+1][column-1]=="--")
        {
            valid_plate1.valid_plate[row+1][column-1]=true;
        }
        else
        {
            if (wob_king==B)
            {
                if (plate_asli.plate[row+1][column-1][1]=='w')
                {
                    valid_plate1.valid_plate[row+1][column-1]=true;
                }
            }
            else
            {
                if (plate_asli.plate[row+1][column-1][1]=='B')
                {
                    valid_plate1.valid_plate[row+1][column-1]=true;
                }
            }
        }
    }
    if (column-1>=0 && row-1>=0)
    {
        if (plate_asli.plate[row-1][column-1]=="--")
        {
            valid_plate1.valid_plate[row-1][column-1]=true;
        }
        else
        {
            if (wob_king==B)
            {
                if (plate_asli.plate[row-1][column-1][1]=='w')
                {
                    valid_plate1.valid_plate[row-1][column-1]=true;
                }
            }
            else
            {
                if (plate_asli.plate[row-1][column-1][1]=='B')
                {
                    valid_plate1.valid_plate[row-1][column-1]=true;
                }
            }
        }
    }
}