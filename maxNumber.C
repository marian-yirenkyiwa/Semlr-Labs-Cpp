#include <iostream>

using namespace std;

//a function to find the maximum number from an array of integers
int max_value (int arrNum[], int len){
    
    //the max variable will store the first index of the array as the default maximum value
    int max = arrNum[0];

    //the for loop will iterate through the array of integers
    for (int i = 0; i<len;++i){

        //the if  condition will compare the current value and the next value and store the maximum value 
        //after the comparison
        if(max < arrNum[i]){
            max = arrNum[i];
        }
    }
    return max;
}

int main(){
    int arrNum [] = {2, 8, 12, 1, 5, 10, 3, 7};
    int arrLength = 8;  

    //the max number will call the max_value function and store the return value
    int max_number = max_value(arrNum, arrLength);

    cout << "The maximum number in the array is "<<max_number<<endl;
}