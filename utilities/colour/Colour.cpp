
#include "Colour.h"

Colour::Colour() = default;

Colour::Colour(unsigned char r, unsigned char g, unsigned char b)
{
    this->r = (float) r/255;
    this->g = (float) g/255;
    this->b = (float) b/255;
}

Colour::Colour(float r, float g, float b)
{
    if (r>1 || r<0 || g>1 || g<0 || b>1 || b<0) {
        throw std::invalid_argument("Float value Colour must be in range 0 to 1");
    }
    this->r = r;
    this->g = g;
    this->b = b;
}

Colour* Colour::clone()
{
    return new Colour(r, g, b);
}
