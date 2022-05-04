#include <iostream>
#include <cinttypes>
#include <functional>

#include "A.h"
#include "CDataBuffer.h"

int main() {

    cout << "============ testA ============" << endl;
    A* a = new A{1, 2, 3, 4};
    A b = *a;
    b.Dump();
    A c;
    c = *a;
    c.Dump();
    cout << "============ testA ============" << endl;

    cout << "============ testDataBufferA ============" << endl;
    CDataBuffer bufferA{"bufferA", a, sizeof(A)};
    cout << "============ testDataBufferA ============" << endl;

    cout << "============ testDataBufferB ============" << endl;
    //CDataBuffer bufferB{bufferA};
    CDataBuffer bufferB = bufferA;
    cout << "============ testDataBufferB ============" << endl;

    cout << "============ testDataBufferC ============" << endl;
    CDataBuffer bufferC;
    bufferC = bufferA;
    cout << "============ testDataBufferC ============" << endl;

    cout << "============ destrutor ============" << endl;
}

