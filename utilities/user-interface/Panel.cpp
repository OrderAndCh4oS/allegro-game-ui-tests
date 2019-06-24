
#include "Panel.h"
#include "Box.h"
#include "../primitives/Rect.h"

Panel::Panel(float x, float y, float width, float height, Colour fill)
        :Box(x, y, width, height)
{
    this->fill = fill;
}

Panel::Panel(float x, float y, float width, float height, Colour fill, Colour stroke)
        :Panel(x, y, width, height, fill)
{
    this->stroke = stroke;
}

Panel::Panel(float x, float y, float width, float height, Colour fill, Colour stroke, float strokeWidth)
        :Panel(x, y, width, height, fill, stroke)
{
    this->strokeWidth = strokeWidth;
}

void Panel::drawChildren() const
{
    for (Panel* child : children) {
        child->draw(this->getX(), this->getY());
    }
}

void Panel::add(Panel* child)
{
    children.push_back(child);
}

void Panel::draw()
{
    this->draw(0, 0);
}

void Panel::draw(float xOffset, float yOffset)
{
    Box* rect = this->getCoordinates(xOffset, yOffset);

    if (this->stroke.isInitialised()) {
        Rect::drawFillWithBorderInside(*rect, this->fill, this->stroke, this->strokeWidth);
    }
    else {
        Rect::drawFill(*rect, this->fill);
    }

    drawChildren();

    delete rect;
}

Colour Panel::getFill()
{
    return fill;
}

void Panel::setFill(Colour fill)
{
    Panel::fill = fill;
}

Colour Panel::getStroke()
{
    return stroke;
}

void Panel::setStroke(Colour stroke)
{
    Panel::stroke = stroke;
}

float Panel::getStrokeWidth()
{
    return strokeWidth;
}

void Panel::setStrokeWidth(float strokeWidth)
{
    Panel::strokeWidth = strokeWidth;
}
