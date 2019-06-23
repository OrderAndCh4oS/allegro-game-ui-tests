//
// Created by sarcoma on 6/23/19.
//

#ifndef GAME_UI_IMAGECOLLECTION_H
#define GAME_UI_IMAGECOLLECTION_H

#include <vector>
#include <allegro5/bitmap.h>
#include "Image.h"

class ImageCollection {
private:
    std::vector<Image*> images;
public:
    ~ImageCollection();

    void add(Image* image);
};

#endif //GAME_UI_IMAGECOLLECTION_H
