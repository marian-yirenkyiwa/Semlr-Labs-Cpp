#include <iostream>

int main(){

    int num1 {}, num2 {};       //num1 and num2 will store 2 user integer inputs
    char math_operator;         //the math_operator will store user input of a math operator

    std::cout << "Enter two numbers -> ";           
    std::cin >> num1 >> num2;


    std::cout<<"Enter a math operator of your choice -> ";
    std::cin >> math_operator;


    //the switch statement will look out for valid math operators and perform math operations with them
    //User will be prompted to enter a valid math operator when the math operator entered is not valid
    switch(math_operator){
        case '+':
            {
                int addition= num1+num2;
                std::cout<<"Adding " << num1 <<  " and " << num2 <<" = " <<addition <<std::endl;
                break;
            }
           
        
        case '-':
            {
                 int subtraction = num1-num2;
            std::cout<<"Subtracting " << num1 <<  " and " << num2 <<" = " <<subtraction <<std::endl;
            break;
            }
        
        case '*':
            {
                 int multiplication = num1*num2;
            std::cout<<"Multiplying " << num1 <<  " and " << num2 <<" = " <<multiplication <<std::endl;
            break;
            }
        
        case '/':
            {
                 float division = (float)num1/(float)num2;
            std::cout<<"Dividing " << num1 <<  " and " << num2 <<" = " <<division <<std::endl;
            break;
            }
        
        case '%':
            {
                 int modulo = num1%num2;
            std::cout<<"The remainder of " << num1 <<  " and " << num2 <<" = " <<modulo <<std::endl;
            break;
            }

        default:
            std::cout<<"Enter a valid math operator!"<<std::endl;

    } 
    return 0;
}