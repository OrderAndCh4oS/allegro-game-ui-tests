//
// Created by sarcoma on 6/22/19.
//

#ifndef GAME_UI_TEXTBOX_H
#define GAME_UI_TEXTBOX_H

#include <allegro5/allegro_font.h>
#include "Panel.h"
#include "../font/FontStyle.h"

class TextBox : Panel {
private:
    FontStyle fontStyle;
    const char* text{};
public:
    TextBox(FontStyle fontStyle, float x, float y, float width, float height, Colour fill);

    TextBox(FontStyle fontStyle, float x, float y, float width, float height, Colour fill, Colour stroke);

    TextBox(FontStyle fontStyle, float x, float y, float width, float height, Colour fill, Colour stroke,
            float strokeWidth);

    void draw() override;

    void draw(float xOffset, float yOffset) override;

    FontStyle getFontStyle();

    void setFontStyle(FontStyle fontStyle);

    const char* getText() const;

    void setText(const char* text);
};

#endif //GAME_UI_TEXTBOX_H
