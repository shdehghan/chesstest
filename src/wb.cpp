#include "wb.h"

std::map<Id, sf::Texture> wb_textures;

WB::WB(Id _id) : id(_id)
{
    this->load_texture();
}

void WB::load_texture()
{
    if (wb_textures.find(this->id) == wb_textures.end())
        wb_textures[this->id].loadFromFile(get_wb_path(this->id));
    this->sprite.setTexture(wb_textures[this->id]);
    float piece_scale_x = (float)setting::cell_size / this->sprite.getTexture()->getSize().x;
    float piece_scale_y = (float)setting::cell_size / this->sprite.getTexture()->getSize().y;
    this->sprite.setScale(piece_scale_x, piece_scale_y);
}