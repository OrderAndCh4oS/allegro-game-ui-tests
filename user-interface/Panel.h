//
// Created by sarcoma on 6/19/19.
//

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
    std::vector<Panel*> children;
public:
    Panel(float x, float y, float width, float height, Colour& fill);
    Panel(float x, float y, float width, float height, Colour& fill, Colour& stroke) : Panel(x, y, width, height, fill)
    {
        this->stroke = &stroke;
    };
    Panel(float x, float y, float width, float height, Colour& fill, Colour& stroke, float strokeWidth) : Panel(x, y, width, height, fill, stroke) {
        this->strokeWidth = strokeWidth;
    };

    ~Panel();
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
};

#endif //GAME_UI_PANEL_H
