#ifndef HELPER_H
#define HELPER_H


#include "SFML/Graphics.hpp"
#include "setting.h"
#include "data.h"
using namespace std;


sf::Vector2f get_cell_position(int row,int column);

string get_wb_path(Id id);

int get_cell_index(int x);

string get_name_of_id(Id id);

#endif