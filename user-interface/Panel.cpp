
#include "Panel.h"
#include "Rect.h"

Panel::Panel(float x, float y, float width, float height, Colour& fill)
        :Rect(x, y, width, height)
{
    this->fill = &fill;
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
    Rect* rect = this->getCoordinates(xOffset, yOffset);

    if (this->stroke) {
        al_draw_rectangle(rect->getX(), rect->getY(), rect->getX2(), rect->getY2(), this->stroke->get(), this->strokeWidth*2);
    }
    al_draw_filled_rectangle(rect->getX(), rect->getY(), rect->getX2(), rect->getY2(), this->fill->get());
    drawChildren();
}

Colour& Panel::getFill()
{
    return *fill;
}

void Panel::setFill(Colour& fill)
{
    Panel::fill = &fill;
}

Colour& Panel::getStroke()
{
    return *stroke;
}

void Panel::setStroke(Colour& stroke)
{
    Panel::stroke = &stroke;
}

float Panel::getStrokeWidth()
{
    return strokeWidth;
}

void Panel::setStrokeWidth(float strokeWidth)
{
    Panel::strokeWidth = strokeWidth;
}

Panel::~Panel()
{

}
