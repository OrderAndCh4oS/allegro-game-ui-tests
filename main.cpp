// Note: Checkout: Allegro GUI and MasKing

#include "main.h"
#include "utilities/font/Font.h"

#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

int main(int argc, char** argv)
{
    ALLEGRO_DISPLAY* display = nullptr;
    ALLEGRO_EVENT_QUEUE* event_queue = nullptr;

    auto* colours = new Colours();
    auto* menu = new Panel(120, 120, 400, 300, *colours->green, *colours->red, 21);

    menu->add(new Panel(10, 10, 50, 50, *colours->blue));
    menu->add(new Panel(70, 10, 50, 50, *colours->blue));

    initAllegro();
    initResourceRoot();

    Font* caslonBold = new Font((char*) "LibreCaslonText-Bold.ttf");
    ALLEGRO_FONT* caslonBoldSixteen = caslonBold->getFont();

    auto* resolution = new Resolution(false);
    resolution->configure();

    display = al_create_display(resolution->getWidth(), resolution->getHeight());

    event_queue = al_create_event_queue();
    if (!event_queue) {
        fprintf(stderr, "failed to create event_queue!\n");
        al_destroy_display(display);
        return -1;
    }

    al_register_event_source(event_queue, al_get_display_event_source(display));

    al_clear_to_color(al_map_rgb(0, 0, 0));

    al_flip_display();

    while (true) {
        ALLEGRO_EVENT ev;
        ALLEGRO_TIMEOUT timeout;
        al_init_timeout(&timeout, 0.06);

        bool get_event = al_wait_for_event_until(event_queue, &ev, &timeout);

        if (get_event && ev.type==ALLEGRO_EVENT_DISPLAY_CLOSE) {
            break;
        }

        al_clear_to_color(al_map_rgb(0, 0, 0));

        menu->draw();
        al_draw_text(caslonBoldSixteen, al_map_rgb(255, 255, 255), 640/2, (480/4), ALLEGRO_ALIGN_CENTRE, "Your Text Here!");

        al_flip_display();
    }

    delete menu;
    al_destroy_event_queue(event_queue);
    al_destroy_display(display);

    return 0;
}

void initAllegro()
{
    al_init(); // NOLINT(hicpp-signed-bitwise)
    al_init_font_addon();
    al_init_ttf_addon();
}

ALLEGRO_PATH* initResourceRoot()
{
    ALLEGRO_PATH* path = al_get_standard_path(ALLEGRO_RESOURCES_PATH);
    al_append_path_component(path, "resources");
    al_change_directory(al_path_cstr(path, '/'));
    al_destroy_path(path);
}