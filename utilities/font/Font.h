//
// Created by sarcoma on 6/20/19.
//

#ifndef GAME_UI_FONT_H
#define GAME_UI_FONT_H

#include <stdexcept>

#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

class Font {
private:
    char* fileName;
    char* style;
public:
    Font(char* fileName);

    void checkFontHasLoaded(ALLEGRO_FONT* font);

    ALLEGRO_FONT* getFont();
    ALLEGRO_FONT* getFont(int size);
};

#endif //GAME_UI_FONT_H
