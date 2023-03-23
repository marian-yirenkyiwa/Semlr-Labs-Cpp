#include <iostream>

using namespace std;

int main(){

    char array[] {"hello"};
    char *p {array};

    // cout<<&array[2]<<endl<<p+2<<endl;

    if(&array[2] != (p+2))
        cout<<"weird"<<endl;
    else
        cout<<"good"<<endl;

    return 0;
}