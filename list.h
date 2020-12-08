#ifndef LIST_H
#define LIST_H

#include <cstring>
#include <ctime>

template <class T>
class List
{
public:
    List(const int& length = 0);
    void Create(const int & length);
    void AddElem(const T & data,const int & pos);
    void RmData(const int & pos);
    T* arr;
    virtual ~List(){};

protected:

    int length;
    //int elemNum;
};

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
void List<T>::AddElem(const T & data,const int & pos)
{
    if(pos < 0 || pos >= length)
    {
    }
    else
    {
        for(int i = length -2 ;i >= pos ;i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = data;
    }
}

template<class T>
void List<T>::RmData(const int & pos)
{
    for(int i = pos;i < length-2;i++)
    {
        arr[i] = arr[i+1];
    }
}



#endif // LIST_H
