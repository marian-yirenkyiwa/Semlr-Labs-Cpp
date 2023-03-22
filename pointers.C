#include <iostream>

using namespace std;

int main (){
    int value = 59;
int* point_to_value = &value; //this is how a pointer is declared

cout << "value = " << value << endl;
cout << "The address of value = " << point_to_value << endl; //this line of code will print the address of the variable 'value'
cout <<"Value from the pointer = " << *point_to_value <<endl; 

int a = 'A';
cout<<"variable a = " << a <<endl;

return 0;

}