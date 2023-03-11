#pragma once

class OverFlowSizeCheck
{
public:
    OverFlowSizeCheck(int size): m_size(size){}
    ~OverFlowSizeCheck() {}

    int GetSize() { return m_size;}

protected:
    void SetSize(int size) {m_size = size;}
    bool Legal(int index) {return index < m_size && index > 0;}     

private:
    int     m_size;
};

