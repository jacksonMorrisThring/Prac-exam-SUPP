#ifndef LIGHTBOX_H
#define LIGHTBOX_H

#include <string>

class LightBox{
public:
    std::string colourName;
    int width;

    LightBox();          // a default constructor 
    LightBox(int width, std::string colourname); // a constructor that takes the colour (as a string) and width as arguments
    
    // Behaviour
    std::string get_colour();  // returns the colour that the lightbox displays
    int get_width();    // returns the width in centimetres of the lightbox
    ~LightBox();       //A default destructor

};

#endif