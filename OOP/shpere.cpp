#include <iostream>
#include <cassert>
#include <stdexcept>

class Sphere{
    public:
        Sphere(float r =0){
            if(this->radius <=0)
            {
                throw std::invalid_argument("radius must be positive");
            } 
            else
            {
                this->radius = r;
            }
        }

        float getRadius(){
            return this->radius;
        }

        float getVolume(){
            return pi*4/3*pow(this->radius, 3);
        }

    private:
        float radius{0};
        float volume{0};
        float const pi = 3.14159;

};

int main(void){
    Sphere sphere(5);
    std::cout << "Radius is: " << sphere.getRadius() << std::endl;
    std::cout << "Volume is: " << sphere.getVolume()<< std::endl;
}