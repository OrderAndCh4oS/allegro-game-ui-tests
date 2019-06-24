//
// Created by sarcoma on 6/20/19.
//

#ifndef GAME_UI_FONT_H
#define GAME_UI_FONT_H

#include <stdexcept>

#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

class Font {
public:
    static ALLEGRO_FONT* get(const char* fileName, int size);
};

#endif //GAME_UI_FONT_H
