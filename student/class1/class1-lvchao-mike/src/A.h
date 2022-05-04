#ifndef CLASS1_A_H
#define CLASS1_A_H

#include <iostream>
#include <cinttypes>

using namespace std;

class A {
    int m_a = 1;
    int m_b = 2;
    int m_c = 3;
    uint8_t m_d = 4;
public:
    A() = default;
    A(int a, int b, int c, uint8_t d);
    A(const A& other);
    A& operator=(const A& other);
    ~A();
   void Dump();
};


#endif
