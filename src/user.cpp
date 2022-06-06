#include "user.h"
#include "plate.h"
#include "king.h"
#include "queen.h"
#include "bishop.h"
#include "rook.h"
#include "knight.h"
#include "pawn.h"

User::User(Id _id) : id(_id) {}

bool User::check_win(Cells &cells)
{
    Plate valid_plate1;
    Plate plate_asli;
    plate_asli.vectorSaz(plate_asli.plate);
    valid_plate1.validPlateSaz(valid_plate1.valid_plate);
    vector<vector<bool>> validKing;
    vector<vector<bool>> validPlate;
    for (int i=0;i<8;i++)
    {
        for (int j=0;j<8;j++)
        {
            if (plate_asli.plate[i][j][1]=='K')
            {
                if (plate_asli.plate[i][j][2]=='W')
                {
                    King king_w(i,j,W);
                    validKing=king_w.valid();
                    for (int k=0;k<8;k++)
                    {
                        for (int h=0;h<8;h++)
                        {
                            if (plate_asli.plate[k][h][2]=='B')
                            {
                                if (plate_asli.plate[k][h][1]=='K')
                                {
                                    King king_b(k,h,B);
                                    validPlate=king_b.valid();
                                    for (int m=0;m<8;m++)
                                    {
                                        for (int l=0;l<8;l++)
                                        {
                                            if (validKing[m][l]==true && validPlate[m][l]==true)
                                            {
                                                validKing[m][l]=false;
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    if (plate_asli.plate[k][h][1]=='Q')
                                    {
                                        Queen queen_b(k,h,B);
                                        validPlate=queen_b.valid();
                                        for (int m=0;m<8;m++)
                                        {
                                            for (int l=0;l<8;l++)
                                            {
                                                if (validKing[m][l]==true && validPlate[m][l]==true)
                                                {
                                                    validKing[m][l]=false;
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        if (plate_asli.plate[k][h][1]=='B')
                                        {
                                            Bishop bishop_b(k,h,B);
                                            validPlate=bishop_b.valid();
                                            for (int m=0;m<8;m++)
                                            {
                                                for (int l=0;l<8;l++)
                                                {
                                                    if (validKing[m][l]==true && validPlate[m][l]==true)
                                                    {
                                                        validKing[m][l]=false;
                                                    }
                                                }
                                            }
                                        }
                                        else
                                        {
                                            if (plate_asli.plate[k][h][1]=='R')
                                            {
                                                Rook rook_b(k,h,B);
                                                validPlate=rook_b.valid();
                                                for (int m=0;m<8;m++)
                                                {
                                                    for (int l=0;l<8;l++)
                                                    {
                                                        if (validKing[m][l]==true && validPlate[m][l]==true)
                                                        {
                                                            validKing[m][l]=false;
                                                        }
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                if (plate_asli.plate[k][h][1]=='N')
                                                {
                                                    Knight knight_b(k,h,B);
                                                    validPlate=knight_b.valid();
                                                    for (int m=0;m<8;m++)
                                                    {
                                                        for (int l=0;l<8;l++)
                                                        {
                                                            if (validKing[m][l]==true && validPlate[m][l]==true)
                                                            {
                                                                validKing[m][l]=false;
                                                            }
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    if (plate_asli.plate[k][h][1]=='P')
                                                    {
                                                        Pawn pawn_b(k,h,true,B);
                                                        validPlate=pawn_b.valid();
                                                        for (int m=0;m<8;m++)
                                                        {
                                                            for (int l=0;l<8;l++)
                                                            {
                                                                if (validKing[m][l]==true && validPlate[m][l]==true)
                                                                {
                                                                    validKing[m][l]=false;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    for (int k=0;k<8;k++)
                    {
                        for (int h=0;h<8;h++)
                        {
                            if (validKing[k][h]==true)
                            {
                                return false;
                            }
                        }
                    }
                    return true;
                }
                else
                {
                    King king_b(i,j,B);
                    validKing=king_b.valid();
                    for (int k=0;k<8;k++)
                    {
                        for (int h=0;h<8;h++)
                        {
                            if (plate_asli.plate[k][h][2]=='w')
                            {
                                if (plate_asli.plate[k][h][1]=='K')
                                {
                                    King king_w(k,h,W);
                                    validPlate=king_w.valid();
                                    for (int m=0;m<8;m++)
                                    {
                                        for (int l=0;l<8;l++)
                                        {
                                            if (validKing[m][l]==true && validPlate[m][l]==true)
                                            {
                                                validKing[m][l]=false;
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    if (plate_asli.plate[k][h][1]=='Q')
                                    {
                                        Queen queen_w(k,h,W);
                                        validPlate=queen_w.valid();
                                        for (int m=0;m<8;m++)
                                        {
                                            for (int l=0;l<8;l++)
                                            {
                                                if (validKing[m][l]==true && validPlate[m][l]==true)
                                                {
                                                    validKing[m][l]=false;
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        if (plate_asli.plate[k][h][1]=='B')
                                        {
                                            Bishop bishop_w(k,h,W);
                                            validPlate=bishop_w.valid();
                                            for (int m=0;m<8;m++)
                                            {
                                                for (int l=0;l<8;l++)
                                                {
                                                    if (validKing[m][l]==true && validPlate[m][l]==true)
                                                    {
                                                        validKing[m][l]=false;
                                                    }
                                                }
                                            }
                                        }
                                        else
                                        {
                                            if (plate_asli.plate[k][h][1]=='R')
                                            {
                                                Rook rook_w(k,h,W);
                                                validPlate=rook_w.valid();
                                                for (int m=0;m<8;m++)
                                                {
                                                    for (int l=0;l<8;l++)
                                                    {
                                                        if (validKing[m][l]==true && validPlate[m][l]==true)
                                                        {
                                                            validKing[m][l]=false;
                                                        }
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                if (plate_asli.plate[k][h][1]=='N')
                                                {
                                                    Knight knight_w(k,h,W);
                                                    validPlate=knight_w.valid();
                                                    for (int m=0;m<8;m++)
                                                    {
                                                        for (int l=0;l<8;l++)
                                                        {
                                                            if (validKing[m][l]==true && validPlate[m][l]==true)
                                                            {
                                                                validKing[m][l]=false;
                                                            }
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    if (plate_asli.plate[k][h][1]=='P')
                                                    {
                                                        Pawn pawn_w(k,h,true,W);
                                                        validPlate=pawn_w.valid();
                                                        for (int m=0;m<8;m++)
                                                        {
                                                            for (int l=0;l<8;l++)
                                                            {
                                                                if (validKing[m][l]==true && validPlate[m][l]==true)
                                                                {
                                                                    validKing[m][l]=false;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    for (int k=0;k<8;k++)
                    {
                        for (int h=0;h<8;h++)
                        {
                            if (validKing[k][h]==true)
                            {
                                return false;
                            }
                        }
                    }
                    return true;
                }
            }
        }
    }
}