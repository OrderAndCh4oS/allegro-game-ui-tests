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
    char* style{(char*)"regular"};
public:
    explicit Font(char* fileName);

    Font(char* fileName, char* style)
            :Font(fileName)
    {
        Font::style = style;
    };

    void checkFontHasLoaded(ALLEGRO_FONT* font);

    ALLEGRO_FONT* getFont();

    ALLEGRO_FONT* getFont(int size);

    char* getFileName() const;

    char* getStyle() const;
};

#endif //GAME_UI_FONT_H
