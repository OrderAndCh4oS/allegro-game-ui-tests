//
// Created by sarcoma on 6/21/19.
//

#include "Point.h"

Point::Point(float x, float y)
{
    Point::x = x;
    Point::y = y;
}

float Point::getX() const
{
    return x;
}

void Point::setX(float x)
{
    Point::x = x;
}

float Point::getY() const
{
    return y;
}

void Point::setY(float y)
{
    Point::y = y;
}