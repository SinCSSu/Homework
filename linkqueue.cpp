#include "linkqueue.h"


template <class T>
LinkQueue<T>::LinkQueue()
{
    queue = new LinkList<T>;
}

template <class T>
void LinkQueue<T>::push(const T & data)
{
    queue->PushBack(data);
}

template <class T>
void LinkQueue<T>::pop()
{
    queue->popFront();
}

template <class T>
T LinkQueue<T>::front()
{
    return queue->GetFront();
}

template <class T>
bool LinkQueue<T>::empty()
{
    return queue->IsEmpty();
}

template <class T>
int LinkQueue<T>::size()
{
    return queue->Size();
}
