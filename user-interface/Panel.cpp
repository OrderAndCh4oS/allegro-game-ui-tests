
#include "Panel.h"
#include "Rect.h"

Panel::Panel(float x, float y, float width, float height, Colour& fill)
        :Rect(x, y, width, height)
{
    this->fill = &fill;
}

Panel::Panel(float x, float y, float width, float height, Colour& fill, Colour& stroke)
        :Panel(x, y, width, height, fill)
{
    this->stroke = &stroke;
}

Panel::Panel(float x, float y, float width, float height, Colour& fill, Colour& stroke, float strokeWidth)
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
    Rect* rect = this->getCoordinates(xOffset, yOffset);

    if (this->stroke) {
        al_draw_rectangle(
                rect->getX()-strokeWidth/2,
                rect->getY()-strokeWidth/2,
                rect->getX2()+strokeWidth/2,
                rect->getY2()+strokeWidth/2,
                this->stroke->get(alpha),
                this->strokeWidth
        );
    }
    al_draw_filled_rectangle(rect->getX(), rect->getY(), rect->getX2(), rect->getY2(), this->fill->get(alpha));
    drawChildren();

    delete rect;
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

float Panel::getAlpha() const
{
    return alpha;
}

void Panel::setAlpha(float alpha)
{
    Panel::alpha = alpha;
}
