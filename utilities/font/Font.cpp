//
// Created by sarcoma on 6/20/19.
//

#include "Font.h"

Font::Font(char* fileName)
{
    Font::fileName = fileName;
}

Font::Font(char* fileName, char* style)
        :Font(fileName)
{
    Font::style = style;
};

void Font::checkFontHasLoaded(ALLEGRO_FONT* font)
{
    if (!font) {
        al_destroy_font(font);
        throw std::invalid_argument("Failed to load caslon");
    }
}

ALLEGRO_FONT* Font::getFont()
{
    ALLEGRO_FONT* font = al_load_ttf_font(fileName, 16, 0);
    this->checkFontHasLoaded(font);
    return font;
}


ALLEGRO_FONT* Font::getFont(int size)
{
    ALLEGRO_FONT* font = al_load_ttf_font(fileName, size, 0);
    this->checkFontHasLoaded(font);
    return font;
}

char* Font::getFileName() const
{
    return fileName;
}

char* Font::getStyle() const
{
    return style;
}
