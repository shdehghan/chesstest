#ifndef SETTING_H
#define SETTING_H


#include "SFML/Graphics.hpp"


struct setting
{
    static int cell_size;
    static int cell_offset;
    static sf::Color cell_color_black;
    static sf::Color cell_color_white;
    static int line_space;
};

#endif