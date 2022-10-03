#include "LightBox.h"
#include <string>
#include <iostream>

LightBox::LightBox(){
    colourName = "?";
    width = 0;
}
LightBox::LightBox(int width, std::string colourname){
    colourName = colourname;
    this -> width = width;
}

// Behaviour
std::string LightBox::get_colour(){
    return colourName;
}
int LightBox::get_width(){
    return width;
}
LightBox::~LightBox(){
    // std::cout << "Destroyed box" << std::endl;
}      