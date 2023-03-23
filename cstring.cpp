#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    string word;
    cout<<"Enter a word: ";
    cin >> word;

    int length = word.length();

    const char* word_char = word.c_str();

    for (int i=0;i<length;i++){
        cout<<word_char[i]<<" ";
    }
    
    return 0;
}