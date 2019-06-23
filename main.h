
#ifndef GAME_UI_MAIN_H
#define GAME_UI_MAIN_H

#include <iostream>

#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

#include "initialisers/InitConstants.h"
#include "constants/colour.h"
#include "constants/font.h"

#include "settings/Resolution.h"

#include "utilities/font/FontStyle.h"

#include "user-interface/Panel.h"
#include "user-interface/TextBox.h"

// Todo: move these declarations and functions elsewhere
ALLEGRO_PATH* initResourceRoot();

void initAllegro();

#endif //GAME_UI_MAIN_H
