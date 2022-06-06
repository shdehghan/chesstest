#include "bishop.h"


Bishop::Bishop(int i,int j,Id wob_bishop):row(i),column(j),wob_bishop(wob_bishop){}
vector<vector<bool>> Bishop::valid()
{
    Plate valid_plate1;
    Plate plate_asli;
    plate_asli.vectorSaz(plate_asli.plate);
    valid_plate1.validPlateSaz(valid_plate1.valid_plate);
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
                if (wob_bishop==B)
                {
                    if (plate_asli.plate[row+i][column+i][1]=='W')
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
                    if (plate_asli.plate[row+i][column+i][1]=='B')
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
                if (wob_bishop==B)
                {
                    if (plate_asli.plate[row-i][column+i][1]=='W')
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
                    if (plate_asli.plate[row-i][column+i][1]=='B')
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
                if (wob_bishop==B)
                {
                    if (plate_asli.plate[row+i][column-i][1]=='W')
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
                    if (plate_asli.plate[row+i][column-i][1]=='B')
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
                if (wob_bishop==B)
                {
                    if (plate_asli.plate[row-i][column-i][1]=='W')
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
                    if (plate_asli.plate[row-i][column-i][1]=='B')
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