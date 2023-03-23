#include <iostream>

using namespace std;

int main(){

    // int p = 21;

    // int* pointer_to_p = &p;

    // cout<<"p = " << p<< endl;
    // cout<<"address of p = "<< pointer_to_p << endl;
    // cout<<"value of p through the pointer = " << *pointer_to_p<<endl;  

    // int p {5};

    // int *i {&p};

    // *i = 10;

    // int **j{&p};

    int var {123};
    int *p {&var};
    ++p;

    //this line of code will print the value of an address  that is 4 byte down of pointer p
    //this is because p is an integer pointer variable
    cout<<*p<<endl;
 
    // cout << q << " " << i << endl;
    return 0;
}