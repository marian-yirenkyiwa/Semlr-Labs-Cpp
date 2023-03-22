#include <iostream>
#include <algorithm>

int main(){
/*	int num1, num2, num3, num4, num5;

	std::cout<<"Enter 5 integers: ";
	std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

	float sum = num1+num2+num3+num4+num5;

	float meanCalc = sum/5;

	std::cout<<"The mean of the 5 integers entered is " <<  meanCalc<<std::endl; */

	int numbers [5];
	float sum = 0;
	float meanCalculate;

	std::cout<<"Enter 5 integers: ";

	for (int i=0;i<5;i++){
		std::cin >> numbers[i];
		sum +=numbers[i];
	}
	
	meanCalculate = sum/5;
	std::cout<<"The mean of the 5 integers entered is " << meanCalculate <<std::endl;


	//std::cout<<sum;


	/*for(int j=0;j<5;j++){
		std::cout<<numbers[j]<< " ";
	}*/


	return 0;
}
