#include <iostream>

enum class State {kEmpty, kObstacle};


int Heuristic(int x1, int y1, int x2, int y2){
    return abs(x2-x1) + abs(y2-y1);
}

int main(){
    std::cout << "Hello World"; 
    return 0;
}