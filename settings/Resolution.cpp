
#include "Resolution.h"

Resolution::Resolution() = default;

int Resolution::getWidth()
{
    return this->width;
}

int Resolution::getHeight()
{
    return this->height;
}

bool Resolution::isFullScreen() const
{
    return fullScreen;
}

void Resolution::setFullScreen(bool isFullScreen)
{
    Resolution::fullScreen = isFullScreen;
}

void Resolution::configure()
{
    al_init_image_addon();
    al_init_primitives_addon();
    configureScreenMode();
    configureDimensions(0);
}

void Resolution::configureDimensions(int mode)
{
    if(this->width && this->height)
        return;
    ALLEGRO_DISPLAY_MODE displayData;
    al_get_display_mode(mode, &displayData);
    this->width = displayData.width;
    this->height = displayData.height;
}

void Resolution::configureScreenMode() const
{
    if (fullScreen)
        al_set_new_display_flags(ALLEGRO_FULLSCREEN);
    else
        al_set_new_display_flags(ALLEGRO_WINDOWED);
}
