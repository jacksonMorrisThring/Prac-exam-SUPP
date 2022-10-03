#include "Shelf.h"
#include <iostream>
// #include "LightBox.h"  


Shelf::Shelf(){
    this -> width = 0;
    array = new LightBox[25];
    counter = 0;
    width_left = 0;
}

Shelf::Shelf(int width){
    this -> width = width;
    array = new LightBox[25];
    counter = 0;
    width_left = width;
} 

int Shelf::get_width(){
    return width;
}
int Shelf::get_num_lightboxes(){
    int counter2 = 0;
    for (int i = 0; i < 25; i++)
    {
        if (array[i].get_width() == 0){
            break;
        }
        counter2 ++;
    }
    return counter2;
    
}

LightBox* Shelf::get_contents(){
    returnArray = new LightBox[counter];

    for (int i = 0; i < counter; i++)
    {
        returnArray[i] = array[i];
    }
    return returnArray; 
}

bool Shelf::add_lightbox(LightBox a_lightbox){
    if(a_lightbox.width > width_left){
        // std::cout << "Box couldnt be added!" << std::endl;
        return false;
    }
    array[counter] = a_lightbox;
    counter ++;
    width_left = width_left - a_lightbox.get_width();
    // std::cout << "Box added!" << std::endl;
    return true;
}
    
Shelf::~Shelf(){
    // for (int i = 0; i < 25; i++)
    // {
    //     delete array[i];
    // }
    delete[] array;
}