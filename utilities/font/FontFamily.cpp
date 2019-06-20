//
// Created by sarcoma on 6/20/19.
//

#include "FontFamily.h"

FontFamily::FontFamily() = default;

void FontFamily::addFont(Font* font)
{
    fonts.push_back(font);
}

ALLEGRO_FONT* FontFamily::getFont(const char* style)
{
    Font* foundFont = findFontByStyle(style);
    if(!foundFont)
        return nullptr;

    return foundFont->getFont();
}

Font* FontFamily::findFontByStyle(const char* style) const
{
    Font* foundFont = nullptr;
    for (Font* font : fonts) {
        if (strcmp(font->getStyle(), style)==0)
            foundFont = font;
    }
    return foundFont;
}

ALLEGRO_FONT* FontFamily::getFont(const char* style, int size)
{
    Font* foundFont = findFontByStyle(style);
    if(!foundFont)
        return nullptr;

    return foundFont->getFont(size);
}
