
#ifndef GAME_UI_COLOURGROUP_H
#define GAME_UI_COLOURGROUP_H

#include "Colour.h"

class ColourGroup {
public:
    Colour* red = new Colour(1.0f, 0.0f, 0.0f);
    Colour* green = new Colour(0.0f, 1.0f, 0.0f);
    Colour* blue = new Colour(0.0f, 0.0f, 1.0f);
};

#endif
