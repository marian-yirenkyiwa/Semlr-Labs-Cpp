#include <iostream>

using namespace std;

int main(){
    enum Color {RED, YELLOW, AMBER=YELLOW, GREEN};

    Color r = RED;
    Color y = YELLOW;
    Color a = AMBER;
    Color g = GREEN;

    //this line of code will print the indexes of the enumerators
    cout<< r << ", " << y << ", " << a << ", " << g <<endl;

    return 0;
}