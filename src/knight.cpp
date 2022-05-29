#include "knight.h"
#include "plate.h"


Knight::Knight(int i,int j,Id wob_knight):row(i),column(j),wob_knight(wob_knight){}
void  Knight::valid()
{
    Plate valid_plate1;
    Plate plate_asli;
    plate_asli.vectorSaz(plate_asli.plate);
    valid_plate1.validPlateSaz(valid_plate1.valid_plate);
    if (wob_knight==B)
    {
        if (column+3<8 && row+1<8)
        {
            if (plate_asli.plate[row+1][column+3]=="--")
            {
                valid_plate1.valid_plate[row+1][column+3]=true;
            }
            else
            {
                if (plate_asli.plate[row+1][column+3][1]=='W')
                {
                    valid_plate1.valid_plate[row+1][column+3]=true;
                }
            }
        }
        if (column+3<8 && row-1>=0)
        {
            if (plate_asli.plate[row-1][column+3]=="--")
            {
                valid_plate1.valid_plate[row-1][column+3]=true;
            }
            else
            {
                if (plate_asli.plate[row-1][column+3][1]=='W')
                {
                    valid_plate1.valid_plate[row-1][column+3]=true;
                }
            }
        }

        if (column-3>=0 && row+1<8)
        {
            if (plate_asli.plate[row+1][column-3]=="--")
            {
                valid_plate1.valid_plate[row+1][column-3]=true;
            }
            else
            {
                if (plate_asli.plate[row+1][column-3][1]=='W')
                {
                    valid_plate1.valid_plate[row+1][column-3]=true;
                }
            }
        }
        if (column-3>=0 && row-1>=0)
        {
            if (plate_asli.plate[row-1][column-3]=="--")
            {
                valid_plate1.valid_plate[row-1][column-3]=true;
            }
            else
            {
                if (plate_asli.plate[row-1][column-3][1]=='W')
                {
                    valid_plate1.valid_plate[row-1][column-3]=true;
                }
            }
        }
        if (column+1<8 && row+3<8)
        {
            if (plate_asli.plate[row+3][column+1]=="--")
            {
                valid_plate1.valid_plate[row+3][column+1]=true;
            }
            else
            {
                if (plate_asli.plate[row+3][column+1][1]=='W')
                {
                    valid_plate1.valid_plate[row+3][column+1]=true;
                }
            }
        }
        if (column+1<8 && row-3>=0)
        {
            if (plate_asli.plate[row-3][column+1]=="--")
            {
                valid_plate1.valid_plate[row-3][column+1]=true;
            }
            else
            {
                if (plate_asli.plate[row-3][column+1][1]=='W')
                {
                    valid_plate1.valid_plate[row-3][column+1]=true;
                }
            }
        }
        if (column-1>=0 && row+3<8)
        {
            if (plate_asli.plate[row+3][column-1]=="--")
            {
                valid_plate1.valid_plate[row+3][column-1]=true;
            }
            else
            {
                if (plate_asli.plate[row+3][column-1][1]=='W')
                {
                    valid_plate1.valid_plate[row+3][column-1]=true;
                }
            }
        }
        if (column-1>=0 && row-3>=0)
        {
            if (plate_asli.plate[row-3][column-1]=="--")
            {
                valid_plate1.valid_plate[row-3][column-1]=true;
            }
            else
            {
                if (plate_asli.plate[row-3][column-1][1]=='W')
                {
                    valid_plate1.valid_plate[row-3][column-1]=true;
                }
            }
        }
    }
    else
    {
        if (column+3<8 && row+1<8)
        {
            if (plate_asli.plate[row+1][column+3]=="--")
            {
                valid_plate1.valid_plate[row+1][column+3]=true;
            }
            else
            {
                if (plate_asli.plate[row+1][column+3][1]=='B')
                {
                    valid_plate1.valid_plate[row+1][column+3]=true;
                }
            }
        }
        if (column+3<8 && row-1>=0)
        {
            if (plate_asli.plate[row-1][column+3]=="--")
            {
                valid_plate1.valid_plate[row-1][column+3]=true;
            }
            else
            {
                if (plate_asli.plate[row-1][column+3][1]=='B')
                {
                    valid_plate1.valid_plate[row-1][column+3]=true;
                }
            }
        }

        if (column-3>=0 && row+1<8)
        {
            if (plate_asli.plate[row+1][column-3]=="--")
            {
                valid_plate1.valid_plate[row+1][column-3]=true;
            }
            else
            {
                if (plate_asli.plate[row+1][column-3][1]=='B')
                {
                    valid_plate1.valid_plate[row+1][column-3]=true;
                }
            }
        }
        if (column-3>=0 && row-1>=0)
        {
            if (plate_asli.plate[row-1][column-3]=="--")
            {
                valid_plate1.valid_plate[row-1][column-3]=true;
            }
            else
            {
                if (plate_asli.plate[row-1][column-3][1]=='B')
                {
                    valid_plate1.valid_plate[row-1][column-3]=true;
                }
            }
        }
        if (column+1<8 && row+3<8)
        {
            if (plate_asli.plate[row+3][column+1]=="--")
            {
                valid_plate1.valid_plate[row+3][column+1]=true;
            }
            else
            {
                if (plate_asli.plate[row+3][column+1][1]=='B')
                {
                    valid_plate1.valid_plate[row+3][column+1]=true;
                }
            }
        }
        if (column+1<8 && row-3>=0)
        {
            if (plate_asli.plate[row-3][column+1]=="--")
            {
                valid_plate1.valid_plate[row-3][column+1]=true;
            }
            else
            {
                if (plate_asli.plate[row-3][column+1][1]=='B')
                {
                    valid_plate1.valid_plate[row-3][column+1]=true;
                }
            }
        }
        if (column-1>=0 && row+3<8)
        {
            if (plate_asli.plate[row+3][column-1]=="--")
            {
                valid_plate1.valid_plate[row+3][column-1]=true;
            }
            else
            {
                if (plate_asli.plate[row+3][column-1][1]=='B')
                {
                    valid_plate1.valid_plate[row+3][column-1]=true;
                }
            }
        }
        if (column-1>=0 && row-3>=0)
        {
            if (plate_asli.plate[row-3][column-1]=="--")
            {
                valid_plate1.valid_plate[row-3][column-1]=true;
            }
            else
            {
                if (plate_asli.plate[row-3][column-1][1]=='B')
                {
                    valid_plate1.valid_plate[row-3][column-1]=true;
                }
            }
        }
    }
}