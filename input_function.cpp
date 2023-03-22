#include <iostream>

using namespace std;

//the input function accepts two user integer inputs and display the inputs. It also implements an addtion on the 2 integers
int input(){
    int num1, num2;
    cout<<"Enter two numbers-> ";
    cin>> num1 >> num2;

    cout<<num1<<" "<<num2<<endl;

    int add = num1 + num2;


    return add;
}


int main(){

//line 23 makes a function call of the input function and stores the result in the variable 'output' 
    int output = input();
    cout<<output;


    return 0;
}