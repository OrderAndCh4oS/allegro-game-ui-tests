//
// Created by sarcoma on 6/19/19.
//

#include "Panel.h"
#include "Rect.h"

float Rect::getWidth() const
{
    return width;
}

void Rect::setWidth(float width)
{
    Rect::width = width;
}

float Rect::getHeight() const
{
    return height;
}

void Rect::setHeight(float height)
{
    Rect::height = height;
}

float Rect::getX() const
{
    return x;
}

void Rect::setX(float x)
{
    Rect::x = x;
}

float Rect::getY() const
{
    return y;
}

void Rect::setY(float y)
{
    Rect::y = y;
}

float Rect::getX2() const
{
    return x2;
}

float Rect::getY2() const
{
    return y2;
}

Rect* Rect::getCoordinates()
{
    return this->getCoordinates(0, 0);
}

Rect* Rect::getCoordinates(float xOffset, float yOffset)
{
    float rectX = this->x+xOffset;
    float rectY = this->y+yOffset;

    return new Rect(rectX, rectY, this->width, this->height);
}

Rect::Rect(float x, float y, float width, float height)
{
    this->x = x;
    this->y = y;
    this->x2 = x+width;
    this->y2 = y+height;
    this->width = width;
    this->height = height;
}
