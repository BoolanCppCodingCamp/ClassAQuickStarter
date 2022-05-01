#include <iostream>

class A {
    int a = 1;
    int b = 2;
    int c = 3;
public:
    A(){ std::cout << "A ctor" << std::endl; }
};

int main(int, char**) {
    A a{};

    std::cout << "Hello, world!\n";
}
