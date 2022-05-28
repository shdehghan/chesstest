#include "plate.h"
using namespace std;

void Plate::vectorSaz(vector<vector<string>> plate)
{
    plate.resize(8);
    for (int row = 0; row < 8; row++)
    {
        plate[row].resize(8);
    }
}
void Plate::validPlateSaz(vector<vector<bool>> valid_plate)
{
    valid_plate.resize(8);
    for (int row = 0; row < 8; row++)
    {
        valid_plate[row].resize(8);
    }
}