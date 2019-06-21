//
// Created by sarcoma on 6/21/19.
//

#ifndef GAME_UI_TEXT_H
#define GAME_UI_TEXT_H

#include <allegro5/allegro_font.h>
#include <string>
#include "Font.h"

class Text {
private:
    float x{0};
    float y{0};
    Font* font;
    ALLEGRO_COLOR colour;
    int size{16};
    int alignment{ALLEGRO_ALIGN_LEFT};
    int lineHeight{19};
    int maxWidth{0};
public:
    Text(float x, float y, Font* font, ALLEGRO_COLOR colour);

    Text(float x, float y, Font* font, ALLEGRO_COLOR colour, int size)
            :Text(x, y, font, colour)
    {
        Text::size = size;
    };

    Text(float x, float y, Font* font, ALLEGRO_COLOR colour, int size, int alignment)
            :Text(x, y, font, colour, size)
    {
        Text::alignment = alignment;
    };

    ~Text();

    void write(char* text);

    void write(char* text, int size);

    void write(char* text, float x, float y);

    void write(char* text, ALLEGRO_COLOR colour);

    void write(char* text, float x, float y, ALLEGRO_COLOR colour);

    void write(char* text, float x, float y, int size);

    void write(char* text, int size, ALLEGRO_COLOR colour);

    void write(char* text, float x, float y, int size, ALLEGRO_COLOR colour);

    float getX() const;

    void setX(float x);

    float getY() const;

    void setY(float y);

    Font* getFont() const;

    void setFont(Font* font);

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

#endif //GAME_UI_TEXT_H
