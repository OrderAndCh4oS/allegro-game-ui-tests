
#include "FontStyle.h"

FontStyle::FontStyle(float x, float y, ALLEGRO_FONT* font, ALLEGRO_COLOR colour)
{
    FontStyle::x = x;
    FontStyle::y = y;
    FontStyle::font = font;
    FontStyle::colour = colour;
}

FontStyle::FontStyle(float x, float y, ALLEGRO_FONT* font, ALLEGRO_COLOR colour, int alignment)
        :FontStyle(x, y, font, colour)
{
    FontStyle::alignment = alignment;
};

void FontStyle::draw(const char* text, float xOffset, float yOffset, ALLEGRO_COLOR colour)
{
    float xPos = x+xOffset;
    float yPos = y+yOffset;
    if (maxWidth==0) {
        al_draw_text(font, colour, xPos, yPos, alignment, text);
    }
    else {
        al_draw_multiline_text(font, colour, xPos, yPos, maxWidth, lineHeight, alignment, text);
    }
}

void FontStyle::write(const char* text)
{
    this->draw(text, 0, 0, colour);
}

void FontStyle::write(const char* text, ALLEGRO_COLOR colour)
{
    this->draw(text, 0, 0, colour);
}

void FontStyle::write(const char* text, float xOffset, float yOffset)
{
    this->draw(text, xOffset, yOffset, colour);
}

void FontStyle::write(const char* text, float xOffset, float yOffset, ALLEGRO_COLOR colour)
{
    this->draw(text, xOffset, yOffset, colour);
}

float FontStyle::getX() const
{
    return x;
}

void FontStyle::setX(float x)
{
    FontStyle::x = x;
}

float FontStyle::getY() const
{
    return y;
}

void FontStyle::setY(float y)
{
    FontStyle::y = y;
}

ALLEGRO_FONT* FontStyle::getFont() const
{
    return font;
}

void FontStyle::setFont(ALLEGRO_FONT* font)
{
    FontStyle::font = font;
}

const ALLEGRO_COLOR& FontStyle::getColour() const
{
    return colour;
}

void FontStyle::setColour(const ALLEGRO_COLOR& colour)
{
    FontStyle::colour = colour;
}

int FontStyle::getSize() const
{
    return size;
}

void FontStyle::setSize(int size)
{
    FontStyle::size = size;
}

int FontStyle::getAlignment() const
{
    return alignment;
}

void FontStyle::setAlignment(int alignment)
{
    FontStyle::alignment = alignment;
}

int FontStyle::getLineHeight() const
{
    return lineHeight;
}

void FontStyle::setLineHeight(int lineHeight)
{
    FontStyle::lineHeight = lineHeight;
}

int FontStyle::getMaxWidth() const
{
    return maxWidth;
}

void FontStyle::setMaxWidth(int maxWidth)
{
    FontStyle::maxWidth = maxWidth;
}
