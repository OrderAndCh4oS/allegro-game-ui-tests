

#ifndef GAME_UI_BOX_H
#define GAME_UI_BOX_H

#include <iostream>
#include <vector>
#include <allegro5/allegro_primitives.h>
#include "../colour/Colour.h"

class Box {
private:
    float x{};
    float y{};
    float x2{};
    float y2{};
    float width{};
    float height{};
public:
    Box(float x, float y, float width, float height);

    Box* getCoordinates();

    Box* getCoordinates(float xOffset, float yOffset);

    float getX() const;

    void setX(float x);

    float getY() const;

    void setY(float y);

    float getWidth() const;

    void setWidth(float width);

    float getHeight() const;

    void setHeight(float height);

    float getX2() const;

    float getY2() const;
};

#endif //GAME_UI_BOX_H
