#include <iostream>

class Animal{
    public:
    double height;
    double weight;
};

class Pet{
    public:
    std::string name;
    std::string owner;
};

class Dog:public Animal, public Pet{
    public:
        bool has_long_fur;
        bool has_short_fur;
};

class Cat:public Animal, Pet{
    public:
        std::string eye_color;
        int age;
};

int main(void) {
    Dog d;
    Cat c;
    d.has_long_fur = true;
    d.weight = 10;
    d.height = 20;
    d.owner = "Ryan";
    std::cout << "Has Long fur " << d.has_long_fur << std::endl << d.owner <<std::endl;
    c.eye_color = "Red";
    c.age = 4;
    std::cout << "Cat eyes are " << c.eye_color << std::endl;
    return 0;
}