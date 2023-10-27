#include <iostream>
#include <string>

class Vehicle{
    public:
        int wheels = 0;
         std::string color = "blue";

        void print()
        {
            std::cout << "Vehicle have " << color << " color " << wheels << " wheels" << std::endl; 
        }
};

class Car: public Vehicle
{
    public:
    bool sunroof = false;
};

class Truck: public Vehicle
{
    bool kickstand = true;
};

int main (void)
{
    Car car;
    car.wheels = 4;
    car.color = "Red";

    Truck truck;
    truck.wheels = 6;
    car.print();
    truck.print();
}
