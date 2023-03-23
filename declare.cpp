#include <iostream>

int main(){
 int a = 10;
 int * b = &a;
int * g = &a;
int * const f = g;

std :: cout << *f;
}