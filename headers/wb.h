#ifndef WB_H
#define WB_H

#include <SFML/Graphics.hpp>
#include "helper.h"
#include "setting.h"

class WB
{
public:
    WB(Id _id);
    sf::Sprite sprite;
    Id id;
    void load_texture(); // ----> bra load e tasvir
};

#endif