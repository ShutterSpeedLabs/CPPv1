#include <iostream>
#include <string>

class  Animal
{
    public:
        std::string color =  "";
        std::string name = "";
        int age = 0;
};

class Snake : public Animal
{
    public:
        int length = 0;
        void MakeSound()
        {
            std::cout << "Hisssss" << std::endl;
        }
};

class Cat: public Animal{
    public:
        int height  = 0;
        void MakeSound()
        {
            std::cout << "meau" << std::endl;
        }
}; 

int main(void)
{
    Cat c;
    Snake s;
    c.color = "brown";
    c.name = "kitty";
    c.age = 9;

    s.age = 2;
    s.color = "gray";
    s.name = "cobra";

    c.MakeSound();
    s.MakeSound();

}


