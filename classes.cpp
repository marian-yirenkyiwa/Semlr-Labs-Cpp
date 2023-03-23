#include <iostream>

class A
{
public:
    A() { std::cout << "A"; }
    ~A() { std::cout << "~A"; }
};

class B : public A
{
public:
    B() { std::cout << "B"; }
    ~B() { std::cout << "~B"; }
};

int main()
{
    B b;
}