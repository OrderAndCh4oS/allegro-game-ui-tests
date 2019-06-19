//
// Created by sarcoma on 6/19/19.
//

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

    Colour(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
            :Colour(r, g, b)
    {
        this->a = (float) a/255;
    };

    Colour(float r, float g, float b, float a)
            :Colour(r, g, b)
    {
        if (a>1 || a<0) {
            throw std::invalid_argument("Float value Colour must be in range 0 to 1");
        }
        this->a = a;
    };

    ALLEGRO_COLOR get()
    {
        return al_map_rgba_f(r, g, b, a);
    }

    Colour* clone();
};

#endif //GAME_UI_COLOUR_H
