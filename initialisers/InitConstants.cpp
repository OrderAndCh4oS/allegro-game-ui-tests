//
// Created by sarcoma on 6/21/19.
//

#include "InitConstants.h"

void InitConstants::caslon()
{
    gColour = new ColourGroup();
}

void InitConstants::colour()
{
    gCaslon = new FontFamily();
    Font* caslonRegular = new Font((char*) "LibreCaslonText-Regular.ttf");
    Font* caslonItalic = new Font((char*) "LibreCaslonText-Italic.ttf", (char*) "italic");
    Font* caslonBold = new Font((char*) "LibreCaslonText-Bold.ttf", (char*) "bold");
    gCaslon->addFont(caslonRegular);
    gCaslon->addFont(caslonItalic);
    gCaslon->addFont(caslonBold);
}