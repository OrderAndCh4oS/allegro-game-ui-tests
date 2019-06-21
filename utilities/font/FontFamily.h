
#ifndef GAME_UI_FONTFAMILY_H
#define GAME_UI_FONTFAMILY_H

#include <vector>
#include "Font.h"

class FontFamily {
private:
    std::vector<Font*> fonts;
public:
    FontFamily();

    void addFont(Font* font);

    ALLEGRO_FONT* getAllegroFont(const char* style);

    ALLEGRO_FONT* getAllegroFont(const char* style, int size);

    Font* findFontByStyle(const char* style) const;
};

#endif //GAME_UI_FONTFAMILY_H
