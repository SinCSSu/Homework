#ifndef LIST_H
#define LIST_H

template <class T>
class List
{
public:
    List(const int& length = 0);
    void Create(const int & length);
    void AddElem(const T &data,const int & pos);
    void RmData(const int & pos);
    T* arr;

protected:

    int length;
    //int elemNum;
};

#endif // LIST_H
