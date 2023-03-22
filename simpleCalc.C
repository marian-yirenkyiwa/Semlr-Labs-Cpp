#include <iostream>
#include <algorithm>

int main(){

int numbers [5];
        float sum = 0;       
       	float meanCalculate;

        std::cout<<"Enter 5 integers: ";

	//this for loop will accept 5 inputs from the user and store them in the 'numbers' array
        for (int i=0;i<5;i++){
                std::cin >> numbers[i];
                sum +=numbers[i];
        }

	//the meanCalculate variable will calculate the mean of the 5 integer input
        meanCalculate = sum/5;

	//this line of code will display the mean to the screen
        std::cout<<"The mean of the 5 integers entered is " << meanCalculate <<std::endl;


