
#ifndef GAME_UI_COLOURS_H
#define GAME_UI_COLOURS_H

#include "../utilities/colour/Colour.h"

class Colours {
public:
    Colour* red = new Colour(1.0f, 0.0f, 0.0f);
    Colour* green = new Colour(0.0f, 1.0f, 0.0f);
    Colour* blue = new Colour(0.0f, 0.0f, 1.0f);
};

#endif
