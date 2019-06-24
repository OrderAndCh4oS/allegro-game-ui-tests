//
// Created by sarcoma on 6/19/19.
//

#include "Panel.h"
#include "Box.h"

float Box::getWidth() const
{
    return width;
}

void Box::setWidth(float width)
{
    Box::width = width;
}

float Box::getHeight() const
{
    return height;
}

void Box::setHeight(float height)
{
    Box::height = height;
}

float Box::getX() const
{
    return x;
}

void Box::setX(float x)
{
    Box::x = x;
}

float Box::getY() const
{
    return y;
}

void Box::setY(float y)
{
    Box::y = y;
}

float Box::getX2() const
{
    return x2;
}

float Box::getY2() const
{
    return y2;
}

Box* Box::getCoordinates()
{
    return this->getCoordinates(0, 0);
}

Box* Box::getCoordinates(float xOffset, float yOffset)
{
    float rectX = this->x+xOffset;
    float rectY = this->y+yOffset;

    return new Box(rectX, rectY, this->width, this->height);
}

Box::Box(float x, float y, float width, float height)
{
    this->x = x;
    this->y = y;
    this->x2 = x+width;
    this->y2 = y+height;
    this->width = width;
    this->height = height;
}
