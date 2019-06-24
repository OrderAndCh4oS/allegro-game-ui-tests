//
// Created by sarcoma on 6/24/19.
//

#ifndef GAME_UI_RECT_H
#define GAME_UI_RECT_H

#include <allegro5/allegro_primitives.h>

#include "../colour/Colour.h"
#include "../user-interface/Box.h"

class Rect {
public:
    static void drawFill(float x, float y, float x2, float y2, Colour& fill);

    static void drawBorder(float x, float y, float x2, float y2, Colour& stroke, float strokeWidth);

    static void
    drawFillWithBorder(float x, float y, float x2, float y2, Colour& fill, Colour& stroke, float strokeWidth);

    static void
    drawFillWithBorderOutside(float x, float y, float x2, float y2, Colour& fill, Colour& stroke, float strokeWidth);

    static void
    drawFillWithBorderInside(float x, float y, float x2, float y2, Colour& fill, Colour& stroke, float strokeWidth);

    static void drawBorderOutside(float x, float y, float x2, float y2, Colour& stroke, float strokeWidth);

    static void drawBorderInside(float x, float y, float x2, float y2, Colour& stroke, float strokeWidth);

    static void drawFill(Box& box, Colour& fill);

    static void drawBorder(Box& box, Colour& stroke, float strokeWidth);

    static void drawBorderOutside(Box& box, Colour& stroke, float strokeWidth);

    static void drawBorderInside(Box& box, Colour& stroke, float strokeWidth);

    static void drawFillWithBorder(Box& box, Colour& fill, Colour& stroke, float strokeWidth);

    static void drawFillWithBorderOutside(Box& box, Colour& fill, Colour& stroke, float strokeWidth);

    static void drawFillWithBorderInside(Box& box, Colour& fill, Colour& stroke, float strokeWidth);
};

#endif //GAME_UI_RECT_H
