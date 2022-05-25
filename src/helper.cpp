#include "helper.h"

sf::Vector2f get_cell_position(int row,int column)
{
    return sf::Vector2f(
        setting::cell_offset + column * ( setting::cell_size + setting::line_space),
        setting::cell_offset + row * ( setting::cell_size + setting::line_space));
}

string get_wb_path(Id id)
{
    string path = "resources/images/";
    path += (id == W ? "W" : "B");
    return path + ".png";
}

int get_cell_index(int x)
{
    x -= setting::cell_offset;
    if (x<0)
        return -1;
    int cell_plus_space = setting::cell_size + setting::line_space;
    int index = x / cell_plus_space;
    if (index > 2 || x > index * cell_plus_space + setting::cell_size)
        return -1;
    return index;
}

string get_name_of_id(Id id)
{
    return id == W ? "W" : "B";
}