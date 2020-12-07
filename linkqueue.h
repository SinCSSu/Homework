#ifndef LINKQUEUE_H
#define LINKQUEUE_H

#include "linklist.h"

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

private:
    LinkList<T> * queue;

};

#endif // LINKQUEUE_H
