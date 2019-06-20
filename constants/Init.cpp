//
// Created by sarcoma on 6/21/19.
//

#include "Init.h"

void Init::constants()
{
    initColour();
    initCaslon();
}

void Init::initColour() { colour = new ColourGroup(); }

void Init::initCaslon()
{
    caslon = new FontFamily();
    Font* caslonRegular = new Font((char*) "LibreCaslonText-Regular.ttf");
    Font* caslonItalic = new Font((char*) "LibreCaslonText-Italic.ttf", (char*) "italic");
    Font* caslonBold = new Font((char*) "LibreCaslonText-Bold.ttf", (char*) "bold");
    caslon->addFont(caslonRegular);
    caslon->addFont(caslonItalic);
    caslon->addFont(caslonBold);
}
