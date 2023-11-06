#include <iostream>

class Ractangle{

    public:
        float Area();

    private:
        float width, height; 
};

float Ractangle::Area(){
    return this->width*this->height;
}

class Square{

};