#include <iostream>
#include <string>

using namespace std;

int main(){
    typedef string array_of_words [10];
    string sentence;

cout<<"Enter 10 strings" <<endl;
    for(int i=0;i<10;i++){

        cin >> sentence;
        array_of_words = sentence[i];
        //cin >> array_of_words[];
    }
    return 0;
}