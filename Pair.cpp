#include "Pair.h"

/*-------------------------------------------------------------------------------*/
// Assignment operator
template <class T1, class T2>
Pair<T1, T2>& Pair<T1, T2>::operator = (const Pair<T1, T2>& pair)
{
	if (this != &pair)
	{
		m_first = pair.GetFirst();
		m_second = pair.GetSecond();
	}
	return *this;
}
/*-------------------------------------------------------------------------------*/
template <class T1, class T2>
void Pair<T1, T2>::Print(ostream& out) const
{
	out << "Key: " << m_first << endl;
	out << "Value: " << m_second << endl;
	out << endl;
}
/*-------------------------------------------------------------------------------*/
template <class T1, class T2>
void Pair<T1, T2>::Input(istream& in)
{
	cout << "Enter First: ";
	in >> m_first;
	cout << "Second: ";
	in >> m_second;
}
/*-------------------------------------------------------------------------------*/
// cout operstor
template <class T1, class T2>
ostream& operator << (ostream& out, const Pair<T1, T2>& pair)
{
	pair.Print(out);
	return out;
}
/*-------------------------------------------------------------------------------*/

template <class T1, class T2>
istream& operator >> (istream& in, Pair<T1, T2>& pair)
{
	pair.Input(in);
	return in;
}

/*-------------------------------------------------------------------------------*/