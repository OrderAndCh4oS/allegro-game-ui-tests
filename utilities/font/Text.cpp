
#include "Text.h"

Text::Text(float x, float y, ALLEGRO_FONT* font, ALLEGRO_COLOR colour)
{
    Text::x = x;
    Text::y = y;
    Text::font = font;
    Text::colour = colour;
}

void Text::write(char* text)
{
    if (this->maxWidth==0) {
        al_draw_text(font, colour, x, y, alignment, text);
    }
    else {
        al_draw_multiline_text(font, colour, x, y, maxWidth, lineHeight, alignment, text);
    }
}

void Text::write(char* text, ALLEGRO_COLOR colour)
{
    Text::colour = colour;
    this->write(text);
}

void Text::write(char* text, float x, float y)
{
    Text::x = x;
    Text::y = y;
    this->write(text);
}

void Text::write(char* text, float x, float y, ALLEGRO_COLOR colour)
{
    Text::x = x;
    Text::y = y;
    Text::colour = colour;
    this->write(text);
}

float Text::getX() const
{
    return x;
}

void Text::setX(float x)
{
    Text::x = x;
}

float Text::getY() const
{
    return y;
}

void Text::setY(float y)
{
    Text::y = y;
}

ALLEGRO_FONT* Text::getFont() const
{
    return font;
}

void Text::setFont(ALLEGRO_FONT* font)
{
    Text::font = font;
}

const ALLEGRO_COLOR& Text::getColour() const
{
    return colour;
}

void Text::setColour(const ALLEGRO_COLOR& colour)
{
    Text::colour = colour;
}

int Text::getSize() const
{
    return size;
}

void Text::setSize(int size)
{
    Text::size = size;
}

int Text::getAlignment() const
{
    return alignment;
}

void Text::setAlignment(int alignment)
{
    Text::alignment = alignment;
}

int Text::getLineHeight() const
{
    return lineHeight;
}

void Text::setLineHeight(int lineHeight)
{
    Text::lineHeight = lineHeight;
}

int Text::getMaxWidth() const
{
    return maxWidth;
}

void Text::setMaxWidth(int maxWidth)
{
    Text::maxWidth = maxWidth;
}
