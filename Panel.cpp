
#include "Panel.h"

Panel::Panel(float x, float y, float width, float height, Colour& fill)
{
    this->x = x;
    this->y = y;
    this->x2 = x+width;
    this->y2 = y+height;
    this->width = width;
    this->height = height;
    this->fill = &fill;
}

void Panel::drawChildren() const
{
    for (Panel* child : children) {
        child->draw(this->x, this->y);
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
    float rectX = this->x+xOffset;
    float rectX2 = this->x2+xOffset;
    float rectY = this->y+yOffset;
    float rectY2 = this->y2+yOffset;

    if (this->stroke) {
        al_draw_rectangle(rectX, rectY, rectX2, rectY2, this->stroke->get(), this->strokeWidth*2);
    }
    al_draw_filled_rectangle(rectX, rectY, rectX2, rectY2, this->fill->get());
    drawChildren();
}

float Panel::getWidth() const
{
    return width;
}

void Panel::setWidth(float width)
{
    Panel::width = width;
}

float Panel::getHeight() const
{
    return height;
}

void Panel::setHeight(float height)
{
    Panel::height = height;
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
