#include <iostream>

int main(){

    char c;     //this variable will store a character

    //this while loop will accept user input of characters until a 'd' is entered, then it logs out
    while(std::cin.get(c)){
         std::cout.put(c);

        //the program will break only when it satisfies this condition
        // if(c=='d')
        //     break;
    }   
    return 0;
}