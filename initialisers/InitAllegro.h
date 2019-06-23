//
// Created by sarcoma on 6/23/19.
//

#ifndef GAME_UI_INITALLEGRO_H
#define GAME_UI_INITALLEGRO_H

#include <allegro5/display.h>

class InitAllegro {
public:
    static void allegro();

    static ALLEGRO_DISPLAY* display(int width, int height);

    static ALLEGRO_EVENT_QUEUE* eventQueue();

    static ALLEGRO_TIMER* timer(float time);

    static void resourcePath();

    static void keyboard();

    static void mouse();

    static void fontAddon();

    static void ttfAddon();
};

#endif //GAME_UI_INITALLEGRO_H
