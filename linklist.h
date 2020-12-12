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
    //LinkList operator=(const LinkList & list);


protected:
    Node<T> * head;
    Node<T> * tail;
    int length;
};

template <class T>
LinkList<T>::LinkList()
{
    head = new Node<T>;
    tail = new Node<T>;
    head->next = tail;
    tail->pre = head;
    head->pre = nullptr;
    tail->next = nullptr;
    length = 0;
}

template <class T>
int LinkList<T>::Size()
{
    return length;
}

template <class T>
void LinkList<T>::PushFront(const T & data)
{
    Node<T> * temp = head->next;
    head->next = new Node<T>;
    head->next->pre = head;
    head->next->data = data;
    head->next->next = temp;
    temp->pre = head->next;
    length++;
}

template <class T>
void LinkList<T>::PushBack(const T &data)
{
    Node<T> * temp = tail->pre;
    temp->next = new Node<T>;
    temp->data = data;
    temp->pre = temp;
    temp->next = tail;
    tail->pre = temp->next;
    length++;
}

template <class T>
T LinkList<T>::GetFront()
{
    if(!IsEmpty())
        return head->next->data;
    else
        return Node<T>().data;
}

template <class T>
T LinkList<T>::GetBack()
{
    if(!IsEmpty())
        return tail->pre->data;
    else
        return Node<T>().data;
}

template <class T>
void LinkList<T>::popFront()
{
    if(!IsEmpty())
    {
        Node<T>* temp = head->next->next;
        delete head->next;
        head->next = temp;
        temp->pre = head;
        length--;
    }
}

template <class T>
void LinkList<T>::popBack()
{
    if(!IsEmpty())
    {
        Node<T> * temp = tail->pre->pre;
        delete  temp->next;
        temp->next = tail;
        tail->pre = temp;
        length--;
    }
}

template  <class T>
bool LinkList<T>::IsEmpty()
{
    return length == 0;
}



#endif // LINKLIST_H
