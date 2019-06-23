// Note: Checkout: Allegro GUI and MasKing

#include "main.h"
#include "initialisers/InitAllegro.h"

int main(int argc, char** argv)
{

    InitAllegro::allegro();
    InitAllegro::fontAddon();
    InitAllegro::ttfAddon();
    InitAllegro::resourcePath();
    InitAllegro::keyboard();

    auto* resolution = new Resolution(false);
    resolution->configure();

    ALLEGRO_DISPLAY* display = InitAllegro::display(resolution->getWidth(), resolution->getHeight());
    ALLEGRO_EVENT_QUEUE* queue = InitAllegro::eventQueue();
    ALLEGRO_TIMER* timer = InitAllegro::timer(1.0/30.0);
    bool redraw = true;

    InitConstants::colour();
    InitConstants::caslon();

    auto* menu = new Panel(120, 120, 400, 300, *gColour->green, *gColour->red, 21);

    menu->add(new Panel(10, 10, 50, 50, *gColour->blue));
    menu->add(new Panel(70, 10, 50, 50, *gColour->blue));

    auto* text = new FontStyle(
            (float) 1920/2,
            (float) 1080/2,
            gCaslon->getFont("italic", 140),
            gColour->red->get(),
            ALLEGRO_ALIGN_CENTRE
    );

    auto* textTwo = new FontStyle(
            60, 15,
            gCaslon->getFont("bold", 16),
            gColour->blue->get(),
            ALLEGRO_ALIGN_CENTRE
    );



    auto* textBox = new TextBox(textTwo, 600, 300, 240, 80, *gColour->green);
    textBox->setText("Text Box");

    al_register_event_source(queue, al_get_keyboard_event_source());
    al_register_event_source(queue, al_get_display_event_source(display));
    al_register_event_source(queue, al_get_timer_event_source(timer));

    al_start_timer(timer);

    while (true) {
        ALLEGRO_EVENT event;

        al_wait_for_event(queue, &event);

        if (event.type==ALLEGRO_EVENT_TIMER)
            redraw = true;

        else if (event.type==ALLEGRO_EVENT_DISPLAY_CLOSE)
            break;

        if (redraw && al_is_event_queue_empty(queue)) {
            al_clear_to_color(al_map_rgb(0, 0, 0));

            menu->draw();
            text->write((char*) "SUPER");
            textBox->draw();

            al_flip_display();

            redraw = false;
        }
    }

    delete menu;
    delete text;
    delete resolution;
    al_destroy_event_queue(queue);
    al_destroy_display(display);
    al_destroy_timer(timer);
    al_destroy_event_queue(queue);

    return 0;
}
