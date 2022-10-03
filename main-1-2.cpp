#include "LightBox.h"
#include "Shelf.h"
#include <iostream>
using namespace std;

int main(){
    Shelf s1(200);
    LightBox l1(100, "red");
    LightBox l2(99, "green");
    LightBox l3(2, "blue");

    // std::cout << "LightBox has color " << l1.get_colour() << " and width " << l1.get_width() << std::endl;

    s1.add_lightbox(l1);
    s1.add_lightbox(l2);
    s1.add_lightbox(l3);

    LightBox *ptr;

    ptr = s1.get_contents();
    for (int i = 0; i < 2; i++)
    {
        std::cout << "LightBox has colour " << ptr[i].get_colour() << std::endl;
    }
    

    return 0;
}