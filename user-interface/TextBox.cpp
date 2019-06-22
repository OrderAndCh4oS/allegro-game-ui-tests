
#include "TextBox.h"

TextBox::TextBox(FontStyle* fontStyle, float x, float y, float width, float height, Colour& fill)
        :Panel(x, y, width, height, fill)
{
    TextBox::fontStyle = fontStyle;
}

TextBox::TextBox(FontStyle* fontStyle, float x, float y, float width, float height, Colour& fill, Colour& stroke)
        :Panel(x, y, width, height, fill, stroke)
{
    TextBox::fontStyle = fontStyle;
}

TextBox::TextBox(
        FontStyle* fontStyle, float x, float y, float width, float height, Colour& fill, Colour& stroke,
        float strokeWidth
)
        :Panel(x, y, width, height, fill, stroke, strokeWidth)
{
    TextBox::fontStyle = fontStyle;
}

void TextBox::draw()
{
    Panel::draw();
    float xPos = fontStyle->getX()+this->getX();
    float yPos = fontStyle->getY()+this->getY();

    fontStyle->write(text, xPos, yPos);
}

void TextBox::draw(float xOffset, float yOffset)
{
    Panel::draw(xOffset, yOffset);
    float xPos = fontStyle->getX()+this->getX()+xOffset;
    float yPos = fontStyle->getY()+this->getY()+yOffset;

    fontStyle->write(text, xPos, yPos);
}

FontStyle* TextBox::getFontStyle() const
{
    return fontStyle;
}

void TextBox::setFontStyle(FontStyle* fontStyle)
{
    TextBox::fontStyle = fontStyle;
}

const char* TextBox::getText() const
{
    return text;
}

void TextBox::setText(const char* text)
{
    TextBox::text = text;
}
