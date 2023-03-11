#pragma once
#include <iostream>
using namespace std;

template <class T1, class T2>
class Pair 
{
  public:
    Pair(T1 first, T2 second): m_first(first), m_second(second){}
    ~Pair() {}

  public:
    Pair<T1, T2>& operator = (const Pair<T1, T2>& pair);

  public:
    T1          GetFirst() const {return m_first;}
    T2          GetSecond() const {return m_second;}
    T1          GetFirst() { return m_first; }
    T2          GetSecond() { return m_second; }
    void	      Print(ostream& out) const;
    void        Input(istream& in);

  private:
    T1        m_first;
    T2        m_second;
};

  template <class T1, class T2>
  ostream& operator << (ostream& out, const Pair<T1, T2>& pair);


  template <class T1, class T2>
  istream& operator >> (istream& in, Pair<T1, T2>& pair);
