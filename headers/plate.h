#ifndef PLATE_H
#define PLATE_H


#include <vector>
#include <string>
class Plate
{
    public:
        vector<vector<string>> plate;
        vector<vector<bool>> valid_plate;
        void vectorSaz(vector<vector<string>> plate);
        void validPlateSaz(vector<vector<bool>> valid_plate);
};
#endif
