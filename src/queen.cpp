#include "queen.h"
#include "plate.h"

Queen::Queen(int i,int j,Id wob_queen):row(i),column(j),wob_queen(wob_queen){}
vector<vector<bool>> Queen::valid()
{
    Plate valid_plate1;
    Plate plate_asli;
    plate_asli.vectorSaz(plate_asli.plate);
    valid_plate1.validPlateSaz(valid_plate1.valid_plate);
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
                if (wob_queen==B)
                {
                    if (plate_asli.plate[row+i][column][2]=='W')
                    {
                        valid_plate1.valid_plate[row+i][column]=true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if (plate_asli.plate[row+i][column][2]=='B')
                    {
                        valid_plate1.valid_plate[row+i][column]=true;
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
                if (wob_queen==B)
                {
                    if (plate_asli.plate[row-i][column][2]=='W')
                    {
                        valid_plate1.valid_plate[row-i][column]=true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if (plate_asli.plate[row-i][column][2]=='B')
                    {
                        valid_plate1.valid_plate[row-i][column]=true;
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
                if (wob_queen==B)
                {
                    if (plate_asli.plate[row][column+i][2]=='W')
                    {
                        valid_plate1.valid_plate[row][column+i]=true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if (plate_asli.plate[row][column+i][2]=='B')
                    {
                        valid_plate1.valid_plate[row][column+i]=true;
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
                if (wob_queen==B)
                {
                    if (plate_asli.plate[row][column-i][2]=='W')
                    {
                        valid_plate1.valid_plate[row][column-i]=true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if (plate_asli.plate[row][column-i][2]=='B')
                    {
                        valid_plate1.valid_plate[row][column-i]=true;
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
    for (int i=0;i<8;i++)
    {
        if (column+i<8 && row+i<8)
        {
            if (plate_asli.plate[row+i][column+i]=="--")
            {
                valid_plate1.valid_plate[row+i][column+i]=true;
            }
            else
            {
                if (wob_queen==B)
                {
                    if (plate_asli.plate[row+i][column+i][2]=='W')
                    {
                        valid_plate1.valid_plate[row+i][column+i]=true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if (plate_asli.plate[row+i][column+i][2]=='B')
                    {
                        valid_plate1.valid_plate[row+i][column+i]=true;
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
    for (int i=0;i<8;i++)
    {
        if (column+i<8 && row-i>=0)
        {
            if (plate_asli.plate[row-i][column+i]=="--")
            {
                valid_plate1.valid_plate[row-i][column+i]=true;
            }
            else
            {
                if (wob_queen==B)
                {
                    if (plate_asli.plate[row-i][column+i][2]=='W')
                    {
                        valid_plate1.valid_plate[row-i][column+i]=true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if (plate_asli.plate[row-i][column+i][2]=='B')
                    {
                        valid_plate1.valid_plate[row-i][column+i]=true;
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
    for (int i=0;i<8;i++)
    {
        if (column-i>=0 && row+i<8)
        {
            if (plate_asli.plate[row+i][column-i]=="--")
            {
                valid_plate1.valid_plate[row+i][column-i]=true;
            }
            else
            {
                if (wob_queen==B)
                {
                    if (plate_asli.plate[row+i][column-i][2]=='W')
                    {
                        valid_plate1.valid_plate[row+i][column-i]=true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if (plate_asli.plate[row+i][column-i][2]=='B')
                    {
                        valid_plate1.valid_plate[row+i][column-i]=true;
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
    for (int i=0;i<8;i++)
    {
        if (column-i>=0 && row-i>=0)
        {
            if (plate_asli.plate[row-i][column-i]=="--")
            {
                valid_plate1.valid_plate[row-i][column-i]=true;
            }
            else
            {
                if (wob_queen==B)
                {
                    if (plate_asli.plate[row-i][column-i][2]=='W')
                    {
                        valid_plate1.valid_plate[row-i][column-i]=true;
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if (plate_asli.plate[row-i][column-i][2]=='B')
                    {
                        valid_plate1.valid_plate[row-i][column-i]=true;
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