#ifndef SHELF_H
#define SHELF_H

#include "LightBox.h"
#include <string>

class Shelf{
public: 
    int width;
    LightBox *array;
    LightBox *returnArray;
    int counter;
    int width_left;

    Shelf();  // default constructor
    Shelf(int width);  // constructor for shelf with given width in centimetres

    int get_width();  // returns the width of the shelf in centimetres

    // returns the number of LightBoxes currently on the shelf
    int get_num_lightboxes(); 

    // returns a dynamic array of the lightboxes currently on the shelf
    LightBox *get_contents();

    // returns true and adds lightbox to shelf if there is sufficient space
    // otherwise returns false
    bool add_lightbox(LightBox a_lightbox);
    
    ~Shelf();


};

#endif