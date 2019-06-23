
#include "ImageCollection.h"

void ImageCollection::add(Image* image)
{
    images.push_back(image);
}

ImageCollection::~ImageCollection()
{
    for (auto& image : images) {
        delete image;
    }
}
