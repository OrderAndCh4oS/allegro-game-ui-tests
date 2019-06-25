
#include "FontStyle.h"

FontStyle::FontStyle() = default;

FontStyle::FontStyle(float x, float y, const char* font, int size, Colour colour)
{
    FontStyle::x = x;
    FontStyle::y = y;
    FontStyle::font = font;
    FontStyle::size = size;
    FontStyle::colour = colour;
}

FontStyle::FontStyle(float x, float y, const char* font, int size, Colour colour, int alignment)
        :FontStyle(x, y, font, size, colour)
{
    FontStyle::alignment = alignment;
};

void FontStyle::draw(const char* text, float xOffset, float yOffset, Colour colour)
{
    float xPos = x+xOffset;
    float yPos = y+yOffset;
    ALLEGRO_FONT* allegroFont = Font::get(font, size);
    if (maxWidth==0) {
        al_draw_text(allegroFont, colour.get(), xPos, yPos, alignment, text);
    }
    else {
        al_draw_multiline_text(Font::get(font, size), colour.get(), xPos, yPos, maxWidth, lineHeight, alignment, text);
    }
}

void FontStyle::write(const char* text)
{
    this->draw(text, 0, 0, colour);
}

void FontStyle::write(const char* text, Colour colour)
{
    this->draw(text, 0, 0, colour);
}

void FontStyle::write(const char* text, float xOffset, float yOffset)
{
    this->draw(text, xOffset, yOffset, colour);
}

void FontStyle::write(const char* text, float xOffset, float yOffset, Colour colour)
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

const char* FontStyle::getFont()
{
    return font;
}

void FontStyle::setFont(const char* font)
{
    FontStyle::font = font;
}

Colour FontStyle::getColour()
{
    return colour;
}

void FontStyle::setColour(Colour colour)
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
