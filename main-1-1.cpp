#include "LightBox.h"
#include <iostream>
using namespace std;

int main(){
    LightBox l1(156, "red");

    std::cout << "LightBox has color " << l1.get_colour() << " and width " << l1.get_width() << std::endl;

    return 0;
}