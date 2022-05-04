#include "A.h"

A::A(int a, int b, int c, uint8_t d) :m_a(a), m_b(b), m_c(c), m_d(d){
    cout << "A default ctor" << endl;
}

A::~A() {
    cout << "A dtor" << endl;
}

A::A(const A &other) :
        m_a(other.m_a),
        m_b(other.m_b),
        m_c(other.m_c),
        m_d(other.m_d) {
    cout << "A copy ctor" << endl;
}

A &A::operator=(const A& other) {
    cout << "A assignment ctor" << endl;
    if (this == &other) return *this;
    this->m_a = other.m_a;
    this->m_b = other.m_b;
    this->m_c = other.m_c;
    this->m_d = other.m_d;
    return *this;
}

void A::Dump() {

    auto dumpItem = [this](auto name, auto& item ) {
        cout << name << "@" << (void*)&item << ", size is " << sizeof(item) << endl;
    };
    dumpItem("m_a", m_a);
    dumpItem("m_b", m_b);
    dumpItem("m_c", m_c);
    dumpItem("m_d", m_d);

    cout << "Obj size: " << sizeof(*this) << endl;
}