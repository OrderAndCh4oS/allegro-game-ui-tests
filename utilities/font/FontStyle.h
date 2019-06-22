//
// Created by sarcoma on 6/21/19.
//

#ifndef GAME_UI_FONTSTYLE_H
#define GAME_UI_FONTSTYLE_H

#include <allegro5/allegro_font.h>
#include <string>
#include "Font.h"

class FontStyle {
private:
    float x{0};
    float y{0};
    ALLEGRO_FONT* font;
    ALLEGRO_COLOR colour;
    int size{16};
    int alignment{ALLEGRO_ALIGN_LEFT};
    int lineHeight{19};
    int maxWidth{0};
protected:

    void draw(const char* text, float xOffset, float yOffset, ALLEGRO_COLOR colour);

public:

    FontStyle(float x, float y, ALLEGRO_FONT* font, ALLEGRO_COLOR colour);

    FontStyle(float x, float y, ALLEGRO_FONT* font, ALLEGRO_COLOR colour, int alignment);

    void write(const char* text);

    void write(const char* text, float xOffset, float yOffset);

    void write(const char* text, ALLEGRO_COLOR colour);

    void write(const char* text, float xOffset, float yOffset, ALLEGRO_COLOR colour);

    float getX() const;

    void setX(float x);

    float getY() const;

    void setY(float y);

    ALLEGRO_FONT* getFont() const;

    void setFont(ALLEGRO_FONT* font);

    const ALLEGRO_COLOR& getColour() const;

    void setColour(const ALLEGRO_COLOR& colour);

    int getSize() const;

    void setSize(int size);

    int getAlignment() const;

    void setAlignment(int alignment);

    int getLineHeight() const;

    void setLineHeight(int lineHeight);

    int getMaxWidth() const;

    void setMaxWidth(int maxWidth);

};

#endif //GAME_UI_FONTSTYLE_H
