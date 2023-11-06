#include <iostream>

template<typename T>

T returnMax(T a, T b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){

    int num1 = 50;
    int num2 = 60;
    std::cout << returnMax(num1, num2) << "\n";

    double num3 = 10.5;
    double num4 = 12.6;
    std::cout << returnMax(num3, num4) << "\n";

    return 0;
}