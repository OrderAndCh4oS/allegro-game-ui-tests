//
// Created by sarcoma on 6/23/19.
//

#include <allegro5/allegro.h>
#include "Image.h"
#include "../../exceptions/InitError.h"
#include "../colour/Colour.h"

Image::Image(const char* image)
{
    Image::image = al_load_bitmap(image);
    if (!this->image) {
        throw InitError("Couldn't load image");
    }
}

ALLEGRO_BITMAP* Image::getImage() const
{
    return image;
}

void Image::draw(float x, float y)
{
    al_draw_bitmap(image, x, y, 0);
}

void Image::draw(float x, float y, ALLEGRO_COLOR tint)
{
    al_draw_tinted_bitmap(image, tint, x, y, 0);
}

void Image::draw(float x, float y, Colour* tint)
{
    al_draw_tinted_bitmap(image, tint->get(), x, y, 0);
}
