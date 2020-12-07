#ifndef LINKLIST_H
#define LINKLIST_H

template<class T>
class Node
{
public:
    T data;
    Node<T> * next;
    Node<T> * pre;
};


template <class T>
class LinkList
{
public:
    LinkList();
    void PushBack(const T & data);
    void PushFront(const T & data);
    void popBack();
    void popFront();
    T GetFront();
    T GetBack();
    bool IsEmpty();
    int Size();

protected:
    Node<T> * head;
    Node<T> * tail;
    int length;
};

#endif // LINKLIST_H
