#ifndef CELL_H
#define CELL_H


#include "vector"
#include "data.h"
#include "wb.h"

class Cell
{
public:
    sf::RectangleShape rect;
    CellStatus cell_status = EMPTY;
    WB* wb;
};

typedef typename std::vector<std::vector<Cell>> Cells;

#endif