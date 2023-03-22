#include <iostream>
 using namespace std;

 int main(){
    
    int number =5;
    int* point_to_number = &number;

    //incrementing an integer through a pointer
    ++(*point_to_number);

    int &number_reference = number;

    //incrementing an integer through a reference
    ++number_reference;

    const int new_number = 8;

    cout<<"The integer value = " <<number;



    return 0;
 }