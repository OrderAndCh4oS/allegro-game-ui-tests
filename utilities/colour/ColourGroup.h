
#ifndef GAME_UI_COLOURGROUP_H
#define GAME_UI_COLOURGROUP_H

#include "Colour.h"

class ColourGroup {
public:
    ~ColourGroup();
    Colour* dustyBlack = new Colour(0x111C26);
    Colour* midBlue = new Colour(0x253659);
    Colour* murkyGrey = new Colour(0x8C6961);
    Colour* lightBlue = new Colour(0x495B73);
    Colour* white = new Colour(0xF2F2DA);
};

#endif
