#include "rook.h"


Rook::Rook(int i,int j,Id wob_rook):row(i),column(j),wob_rook(wob_rook){}
vector<vector<bool>> Rook::valid()
{
    Plate valid_plate1;
    Plate plate_asli;
    plate_asli.vectorSaz(plate_asli.plate);
    valid_plate1.validPlateSaz(valid_plate1.valid_plate);
    if (wob_rook==B)
    {
        for (int i=0;i<8;i++)
        {
            if (row+i<8)
            {
                if (plate_asli.plate[row+i][column]=="--")
                {
                    valid_plate1.valid_plate[row+i][column]=true;
                }
                else
                {
                    if (plate_asli.plate[row+i][column][1]=='W')
                    {
                        valid_plate1.valid_plate[row+i][column]==true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        for (int i=0;i<8;i++)
        {
            if (row-i>=0)
            {
                if (plate_asli.plate[row-i][column]=="--")
                {
                    valid_plate1.valid_plate[row-i][column]=true;
                }
                else
                {
                    if (plate_asli.plate[row-i][column][1]=='W')
                    {
                        valid_plate1.valid_plate[row-i][column]==true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        for (int i=0;i<8;i++)
        {
            if (column+i<8)
            {
                if (plate_asli.plate[row][column+i]=="--")
                {
                    valid_plate1.valid_plate[row][column+i]=true;
                }
                else
                {
                    if (plate_asli.plate[row][column+i][1]=='W')
                    {
                        valid_plate1.valid_plate[row][column+i]==true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        for (int i=0;i<8;i++)
        {
            if (column-i>=0)
            {
                if (plate_asli.plate[row][column-i]=="--")
                {
                    valid_plate1.valid_plate[row][column-i]=true;
                }
                else
                {
                    if (plate_asli.plate[row][column-i][1]=='W')
                    {
                        valid_plate1.valid_plate[row][column-i]==true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
    else
    {
        for (int i=0;i<8;i++)
        {
            if (row+i<8)
            {
                if (plate_asli.plate[row+i][column]=="--")
                {
                    valid_plate1.valid_plate[row+i][column]=true;
                }
                else
                {
                    if (plate_asli.plate[row+i][column][1]=='B')
                    {
                        valid_plate1.valid_plate[row+i][column]==true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        for (int i=0;i<8;i++)
        {
            if (row-i>=0)
            {
                if (plate_asli.plate[row-i][column]=="--")
                {
                    valid_plate1.valid_plate[row-i][column]=true;
                }
                else
                {
                    if (plate_asli.plate[row-i][column][1]=='B')
                    {
                        valid_plate1.valid_plate[row-i][column]==true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        for (int i=0;i<8;i++)
        {
            if (column+i<8)
            {
                if (plate_asli.plate[row][column+i]=="--")
                {
                    valid_plate1.valid_plate[row][column+i]=true;
                }
                else
                {
                    if (plate_asli.plate[row][column+i][1]=='B')
                    {
                        valid_plate1.valid_plate[row][column+i]==true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        for (int i=0;i<8;i++)
        {
            if (column-i>=0)
            {
                if (plate_asli.plate[row][column-i]=="--")
                {
                    valid_plate1.valid_plate[row][column-i]=true;
                }
                else
                {
                    if (plate_asli.plate[row][column-i][1]=='B')
                    {
                        valid_plate1.valid_plate[row][column-i]==true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
    return valid_plate1.valid_plate;
}
