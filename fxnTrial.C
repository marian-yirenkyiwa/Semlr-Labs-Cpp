#include <iostream>

//the getNum function accepts user input
int getNum(){
	int number;
	std::cout << "Enter an integer number: ";
	std::cin >> number;
	return number;

}
int main(){
	int num = getNum();

	if(num%2==0){
		for(int i=1;i<=20;i++){
			int product = num*i;
			std::cout << i<< " * " << num << " = " << product<<std::endl;
		}
	}
	else{
		int counter = 1;
		int intNum = 0;

		while(counter<=30){
			intNum++;
			if(intNum % num !=0){
				std::cout << intNum<<std::endl;
				counter++;
			}
			

		}
	}

	return 0;
}
