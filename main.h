
#ifndef GAME_UI_MAIN_H
#define GAME_UI_MAIN_H

#include <iostream>

#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

#include "initialisers/InitAllegro.h"
#include "initialisers/InitConstants.h"

#include "constants/colour.h"

#include "settings/Resolution.h"

#include "utilities/font/FontStyle.h"
#include "utilities/image/Image.h"
#include "utilities/image/ImageCollection.h"
#include "utilities/user-interface/Panel.h"
#include "utilities/user-interface/TextBox.h"

// Todo: move these declarations and functions elsewhere
ALLEGRO_PATH* initResourceRoot();

void initAllegro();

#endif //GAME_UI_MAIN_H
