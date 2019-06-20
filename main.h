
#ifndef GAME_UI_MAIN_H
#define GAME_UI_MAIN_H

#include <iostream>

#include <allegro5/allegro.h>
#include "settings/Resolution.h"
#include "structs/Colours.h"
#include "user-interface/Panel.h"

ALLEGRO_PATH* initResourceRoot();

void initAllegro();

#endif //GAME_UI_MAIN_H
