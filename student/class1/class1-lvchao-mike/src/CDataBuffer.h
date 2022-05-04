#ifndef CLASS1_CDATABUFFER_H
#define CLASS1_CDATABUFFER_H

#include "A.h"

class CDataBuffer
{
public:
    CDataBuffer() = default;
    virtual ~CDataBuffer();

    CDataBuffer(const std::string& name, A* data, unsigned int length);
    CDataBuffer(const CDataBuffer& db);
    CDataBuffer& operator=(const CDataBuffer& db);


    A* GetExtraData() { return this->m_pFoo; }
    string GetDataName() { return this->m_dataName; }
    unsigned int GetDataLength() { return this->m_DataLength; }
    unsigned int GetBufSize() { return this->m_BufSize; }

private:
    std::string m_dataName{""};
    unsigned int m_DataLength{};
    unsigned int m_BufSize=0;
    A* m_pFoo=nullptr;
};

#endif
