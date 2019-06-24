//
// Created by sarcoma on 6/20/19.
//

#include "Font.h"

ALLEGRO_FONT* Font::get(const char* fileName, int size)
{
    ALLEGRO_FONT* font = al_load_ttf_font(fileName, size, 0);
    if (!font) {
        al_destroy_font(font);
        throw std::invalid_argument("Failed to load caslon");
    }
    return font;
}
