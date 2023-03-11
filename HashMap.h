#pragma once
#include "OverFlowSizeCheck.h"
#include "Pair.h"
#include "CustomExceptions.h"
#include <vector>

template <class K, class V>
class HashMap:
    public OverFlowSizeCheck
{
public:
    HashMap(int size):
        OverFlowSizeCheck(size) {}

    ~HashMap() {}

    void Put(K& k, V& v)
    {
        int max_map_size = GetSize();
        int curr_map_size = m_items.size();
        if (Contains(k)) throw KeyExists();
        if (curr_map_size < max_map_size)
        {
            m_items.push_back(Pair<K, V>(k, v));
            return;
        }
        else
        {
            SetSize(max_map_size + 5);
            m_items.push_back(Pair<K, V>(k, v));
        }
    }

    bool Contains(K& k)
    {
        for (int i = 0; i < m_items.size(); i++)
        {
            if (m_items[i].GetFirst() == k)
            {
                return true;
            }
        }
        return false;
    }

    void Print(ostream& out) const
    {
        for (int i = 0; i < m_items.size(); i++)
        {
            out << m_items[i];
        }
    }

    V operator[] (K& k)
    {
        for (int i = 0; i < m_items.size(); i++)
        {
            if (m_items[i].GetFirst() == k)
            {
                return (m_items[i].GetSecond());
            }
        }
        throw InvalidKey();
    }

private:
    vector< Pair<K, V> >   m_items;
};

template <class K, class V>
ostream& operator << (ostream& out, HashMap<K, V> map)
{
    map.Print(out);
    return out;
}
