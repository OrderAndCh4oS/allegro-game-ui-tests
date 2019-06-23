
#ifndef GAME_UI_COLOURGROUP_H
#define GAME_UI_COLOURGROUP_H

#include "Colour.h"

class ColourGroup {
public:
    Colour* murkyBlack = new Colour(0x260101);
    Colour* murkyDarkGrey = new Colour(0x402516);
    Colour* murkyGrey = new Colour(0x736C48);
    Colour* murkyLightGrey = new Colour(0xA1A67B);
    Colour* murkyWhite = new Colour(0xD9CD91);
    Colour* red = new Colour(1.0f, 0.0f, 0.0f);
    Colour* green = new Colour(0.0f, 1.0f, 0.0f);
    Colour* blue = new Colour(0.0f, 0.0f, 1.0f);
};

#endif
