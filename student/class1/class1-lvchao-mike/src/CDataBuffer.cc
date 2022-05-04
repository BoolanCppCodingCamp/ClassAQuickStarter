#include "CDataBuffer.h"

CDataBuffer::~CDataBuffer() {
    cout << this->m_dataName << " dtor" << endl;
    delete this->m_pFoo;
    this->m_pFoo = nullptr;
}

CDataBuffer::CDataBuffer(const string &name, A *data, unsigned int length) {

    //std::cout << "CDataBuffer::CDataBuffer ctor" << std::endl;

    this->m_dataName = name;
    this->m_DataLength = length;
    this->m_BufSize = 0;
    if (data != nullptr) {
        if (this->m_pFoo != nullptr) {
            *(this->m_pFoo)= (*data); // 堆内存对象 赋值构造
        } else {
            this->m_pFoo = new A{*data}; // 利用堆内存 拷贝构造
        }
    } else {
        delete this->m_pFoo;
        this->m_pFoo = nullptr;
    }

    cout << this->m_dataName << " ctor" << endl;
}

CDataBuffer::CDataBuffer(const CDataBuffer &db) {

//    std::cout << "CDataBuffer::CDataBuffer copy ctor" << std::endl;

    this->m_dataName = db.m_dataName;
    this->m_DataLength = db.m_DataLength;
    this->m_BufSize = db.m_BufSize;
    if (db.m_pFoo != nullptr) {
        if (this->m_pFoo != nullptr) {
            *(this->m_pFoo) = *(db.m_pFoo); // 堆内存对象 赋值构造
        } else {
            this->m_pFoo = new A{*(db.m_pFoo)}; // 利用堆内存 拷贝构造
        }
    } else {
        delete this->m_pFoo;
        this->m_pFoo = nullptr;
    }

    cout << this->m_dataName << " ctor" << endl;
}

CDataBuffer &CDataBuffer::operator=(const CDataBuffer &db) {


    if (this == &db) {
        cout << this->m_dataName << " ctor" << endl;
        return *this;
    }
    this->m_dataName = db.m_dataName;
    this->m_DataLength = db.m_DataLength;
    this->m_BufSize = db.m_BufSize;

    if (db.m_pFoo != nullptr) {
        if (this->m_pFoo != nullptr) {
            *(this->m_pFoo) = *(db.m_pFoo); // 堆内存对象 赋值构造
        } else {
            this->m_pFoo = new A{*(db.m_pFoo)}; // 利用堆内存 拷贝构造
        }
    } else {
        delete this->m_pFoo;
        this->m_pFoo = nullptr;
    }

    cout << this->m_dataName << " ctor" << endl;
    return *this;
}