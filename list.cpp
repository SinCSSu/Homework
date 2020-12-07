#include "list.h"
#include <cstring>
#include <ctime>

template<class T>
List<T>::List(const int & length)
{
    if(length == 0)
    {
        this->length = 0;
    }
    else if(length <0)
    {
    }
    else
    {
        this->arr = new T[length];
        this->length = length;
    }
}

template <class T>
void List<T>::Create(const int &length)
{
    if(length == 0)
    {
        this->length = 0;
    }
    else if(length <0)
    {
    }
    else
    {
        this->arr = new T[length];
        this->length = length;
    }
}

template<class T>
void List<T>::AddElem(const T&data,const int & pos)
{
    if(pos < 0 || pos >= length)
    {
    }
    else
    {
        for(int i = length -1 ;i >= pos ;i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = data;
    }
}

template<class T>
void List<T>::RmData(const int & pos)
{
    for(int i = pos;i < length-1;i++)
    {
        arr[i] = arr[i+1];
    }
}
