

#ifndef GAME_UI_PANEL_H
#define GAME_UI_PANEL_H

#include <iostream>
#include <vector>

#include <allegro5/allegro_primitives.h>

#include "../utilities/colour/Colour.h"
#include "Rect.h"

class Panel:  public Rect {
protected:
    Colour* fill = nullptr;
    Colour* stroke = nullptr;
    float strokeWidth{1};
    float alpha{1};
    std::vector<Panel*> children;
public:
    Panel(float x, float y, float width, float height, Colour& fill);

    Panel(float x, float y, float width, float height, Colour& fill, Colour& stroke);

    Panel(float x, float y, float width, float height, Colour& fill, Colour& stroke, float strokeWidth);

    virtual void draw();

    virtual void draw(float xOffset, float yOffset);

    virtual void add(Panel* child);

    void drawChildren() const;

    Colour& getFill();

    void setFill(Colour& fill);

    Colour& getStroke();

    void setStroke(Colour& stroke);

    float getStrokeWidth();

    void setStrokeWidth(float strokeWidth);

    float getAlpha() const;

    void setAlpha(float alpha);
};

#endif //GAME_UI_PANEL_H
