#ifndef LINKQUEUE_H
#define LINKQUEUE_H

#include "linklist.h"
#include <cstring>

template <class T>
class LinkQueue:protected LinkList<T>
{
public:
    LinkQueue();
    void push(const T & data);
    void pop();
    T front();
    bool empty();
    int size();
    LinkQueue<T> operator=(const LinkQueue<T> & queue);

private:
    LinkList<T> * queue;

};

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

template <class T>
LinkQueue<T> LinkQueue<T>::operator=(const LinkQueue<T> & queue)
{
    Node<T> * p = queue.head;
    for(int i = 0 ;i < queue.size();i++)
    {
        push(p->data);
        p = p->next;
    }
}


#endif // LINKQUEUE_H
