//
// Created by sarcoma on 6/24/19.
//

#include "Rect.h"

void Rect::drawFill(float x, float y, float x2, float y2, Colour& fill)
{
    al_draw_filled_rectangle(x, y, x2, y2, fill.get());
}

void Rect::drawFill(Box& box, Colour& fill)
{
    Rect::drawFill(box.getX(), box.getY(), box.getX2(), box.getY2(), fill);
}

void Rect::drawBorder(float x, float y, float x2, float y2, Colour& stroke, float strokeWidth)
{
    al_draw_rectangle(x, y, x2, y2, stroke.get(), strokeWidth);
}

void Rect::drawBorder(Box& box, Colour& stroke, float strokeWidth)
{
    Rect::drawBorder(box.getX(), box.getY(), box.getX2(), box.getY2(), stroke, strokeWidth);
}

void Rect::drawBorderOutside(float x, float y, float x2, float y2, Colour& stroke, float strokeWidth)
{
    Rect::drawBorder(x-strokeWidth/2, y-strokeWidth/2, x2+strokeWidth/2, y2+strokeWidth/2, stroke, strokeWidth);
}

void Rect::drawBorderOutside(Box& box, Colour& stroke, float strokeWidth)
{
    Rect::drawBorderOutside(box.getX(), box.getY(), box.getX2(), box.getY2(), stroke, strokeWidth);
}

void Rect::drawBorderInside(float x, float y, float x2, float y2, Colour& stroke, float strokeWidth)
{
    Rect::drawBorder(x+strokeWidth/2, y+strokeWidth/2, x2-strokeWidth/2, y2-strokeWidth/2, stroke, strokeWidth);
}

void Rect::drawBorderInside(Box& box, Colour& stroke, float strokeWidth)
{
    Rect::drawBorderInside(box.getX(), box.getY(), box.getX2(), box.getY2(), stroke, strokeWidth);
}

void Rect::drawFillWithBorder(float x, float y, float x2, float y2, Colour& fill, Colour& stroke, float strokeWidth)
{
    Rect::drawFill(x+strokeWidth/2, y+strokeWidth/2, x2-strokeWidth/2, y2-strokeWidth/2, fill);
    Rect::drawBorder(x, y, x2, y2, stroke, strokeWidth);
}

void Rect::drawFillWithBorder(Box& box, Colour& fill, Colour& stroke, float strokeWidth)
{
    Rect::drawFillWithBorder(box.getX(), box.getY(), box.getX2(), box.getY2(), fill, stroke, strokeWidth);
}

void
Rect::drawFillWithBorderOutside(float x, float y, float x2, float y2, Colour& fill, Colour& stroke, float strokeWidth)
{
    Rect::drawFill(x, y, x2, y2, fill);
    Rect::drawBorderOutside(x, y, x2, y2, stroke, strokeWidth);
}

void Rect::drawFillWithBorderOutside(Box& box, Colour& fill, Colour& stroke, float strokeWidth)
{
    Rect::drawFillWithBorderOutside(box.getX(), box.getY(), box.getX2(), box.getY2(), fill, stroke, strokeWidth);

}

void
Rect::drawFillWithBorderInside(float x, float y, float x2, float y2, Colour& fill, Colour& stroke, float strokeWidth)
{
    Rect::drawFill(x+strokeWidth, y+strokeWidth, x2-strokeWidth, y2-strokeWidth, fill);
    Rect::drawBorderInside(x, y, x2, y2, stroke, strokeWidth);
}

void Rect::drawFillWithBorderInside(Box& box, Colour& fill, Colour& stroke, float strokeWidth)
{
    Rect::drawFillWithBorderInside(box.getX(), box.getY(), box.getX2(), box.getY2(), fill, stroke, strokeWidth);

}
