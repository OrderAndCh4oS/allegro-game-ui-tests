//
// Created by sarcoma on 6/19/19.
//

#ifndef GAME_UI_FONT_H
#define GAME_UI_FONT_H

#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <stdexcept>

class Font {
private:
    char* name;
    int size{16};
    ALLEGRO_FONT* font;
public:
    Font();
    explicit Font(char* font);

    Font(char* font, int size) : Font(font) {
        this->size = size;
    };

    char* getFontName() const;

    void setFontName(char* fontName);

    int getSize() const;

    void setSize(int size);

    ALLEGRO_FONT* getFont();
};

#endif //GAME_UI_FONT_H
