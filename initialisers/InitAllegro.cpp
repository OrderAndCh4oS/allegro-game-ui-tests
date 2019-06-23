//
// Created by sarcoma on 6/23/19.
//

#include <allegro5/keyboard.h>
#include <allegro5/timer.h>
#include <exception>
#include <allegro5/system.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include "InitAllegro.h"
#include "../exceptions/InitError.h"

void InitAllegro::allegro()
{
    if (!al_init()) { // NOLINT(hicpp-signed-bitwise)
        throw InitError("Couldn't initialize allegro");
    }
}

ALLEGRO_DISPLAY* InitAllegro::display(int width, int height)
{
    ALLEGRO_DISPLAY* display = al_create_display(width, height);
    if (!display) {
        throw InitError("Couldn't initialize display");
    }

    return display;
}

ALLEGRO_EVENT_QUEUE* InitAllegro::eventQueue()
{
    ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue();
    if (!queue) {
        throw InitError("Couldn't initialize queue");
    }

    return queue;
}

ALLEGRO_TIMER* InitAllegro::timer(float time)
{
    ALLEGRO_TIMER* timer = al_create_timer(time);
    if (!timer) {
        throw InitError("Couldn't initialize timer");
    }

    return timer;
}

void InitAllegro::keyboard()
{
    if (!al_install_keyboard()) {
        throw InitError("Couldn't initialize keyboard");
    }
}

void InitAllegro::fontAddon()
{
    if (!al_init_font_addon()) {
        throw InitError("Couldn't initialize font add on");
    }
}

void InitAllegro::ttfAddon()
{
    if (!al_init_ttf_addon()) {
        throw InitError("Couldn't initialize ttf add on");
    }
}

void InitAllegro::resourcePath()
{
    ALLEGRO_PATH* path = al_get_standard_path(ALLEGRO_RESOURCES_PATH);
    al_append_path_component(path, "resources");
    al_change_directory(al_path_cstr(path, '/'));
    al_destroy_path(path);
}
