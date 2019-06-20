//
// Created by sarcoma on 6/20/19.
//

#include "Fonts.h"

Fonts::Fonts()
{
    Font* caslonRegular = new Font((char*) "LibreCaslonText-Regular.ttf");
    Font* caslonItalic = new Font((char*) "LibreCaslonText-Italic.ttf", (char*) "italic");
    Font* caslonBold = new Font((char*) "LibreCaslonText-Bold.ttf", (char*) "bold");
    caslon->addFont(caslonRegular);
    caslon->addFont(caslonItalic);
    caslon->addFont(caslonBold);
}
