
#ifndef GAME_UI_FONTS_H
#define GAME_UI_FONTS_H

#include "../utilities/text/Font.h"

// Todo: Load resources to find fonts: https://wiki.allegro.cc/index.php?title=Loading_Resources_(Troubleshooting)

class Fonts {
public:
    Font* droidSans = new Font((char*) "DroidSerif-Bold.ttf", 21);
};

#endif
