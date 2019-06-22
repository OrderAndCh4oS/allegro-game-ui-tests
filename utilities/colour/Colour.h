

#ifndef GAME_UI_COLOUR_H
#define GAME_UI_COLOUR_H

#include <stdexcept>
#include <allegro5/color.h>

class Colour {
private:
    float r{1};
    float g{1};
    float b{1};
    float a{1};
public:
    Colour();
    Colour(unsigned char r, unsigned char g, unsigned char b);
    Colour(float r, float g, float b);

    Colour(unsigned char r, unsigned char g, unsigned char b, unsigned char a);

    Colour(float r, float g, float b, float a);

    ALLEGRO_COLOR get()
    {
        return al_map_rgba_f(r, g, b, a);
    }

    Colour* clone();
};

#endif //GAME_UI_COLOUR_H
