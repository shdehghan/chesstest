#include "plate.h"

void Plate::vectorSaz(vector<vector<string>> plate)
{
    plate.resize(8);
    for (int row = 0; row < 8; row++)
    {
        plate[row].resize(8);
    }
}