
#include "Font.h"

Font::Font()
{
    al_init_font_addon();
    al_init_ttf_addon();
}

Font::Font(char* font)
{
    this->name = font;
}

ALLEGRO_FONT* Font::getFont()
{
    ALLEGRO_FONT* allegroFont = al_load_ttf_font(name, size, 0);

    if (!font) {
        throw std::invalid_argument("Could not load font");
    }

    return allegroFont;
}

void Font::setFontName(char* fontName)
{
    Font::name = fontName;
}


char* Font::getFontName() const
{
    return name;
}

int Font::getSize() const
{
    return size;
}

void Font::setSize(int size)
{
    Font::size = size;
}
