//
// Created by sarcoma on 6/23/19.
//

#ifndef GAME_UI_IMAGE_H
#define GAME_UI_IMAGE_H

#include <allegro5/bitmap.h>
#include "../colour/Colour.h"

class Image {
private:
    ALLEGRO_BITMAP* image{};
public:
    explicit Image(const char* image);

    ALLEGRO_BITMAP* getImage() const;

    void draw(float x, float y);

    void draw(float x, float y, ALLEGRO_COLOR tint);

    void draw(float x, float y, Colour* tint);
};

#endif //GAME_UI_IMAGE_H
