#include <iostream>
#include <string>

using namespace std;

int main(){

    char str_sentence[] {};
    string sentence {};
    cout<<"Enter a hyphen connected sentence: ";
    cin >> sentence;

    for(int i=0;i<sentence.length();i++){

        if(sentence[i]=='-'){
            cout<<endl;
        }else{
            cout <<sentence;
        }
    }

    //cout<<sentence;


    return 0;
}