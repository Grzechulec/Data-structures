#ifndef DATA_STRUCTURES_DOUBLY_LINKED_LIST_HPP
#define DATA_STRUCTURES_DOUBLY_LINKED_LIST_HPP

#include <cassert>

template<typename T>
struct Node_dll
{
    T data;
    Node_dll<T>* next = NULL;
    Node_dll<T>* prev = NULL;
};

template <typename T>
class DoublyLinkedList
{
  public:
    bool empty();
    std::size_t size();
    void addFront(const T& newElement);
    void removeFront();
    void addBack(const T& newElement);
    void removeBack();
    const T& front() const;
    const T& back() const;
    void insert(const T& newElement, int index);
    void remove(const T& element);
    T& operator[](int index);
    void print();
  private:
    Node_dll<T>* head = NULL;
    Node_dll<T>* tail = NULL;
    Node_dll<T>* n;
};

template<typename T>
void DoublyLinkedList<T>::print()
{
    if (this->empty())
    {
        std::cout << "list is empty" << std::endl;
    }
    else
    {
        Node_dll<T>* temp = head;
        while (temp!=NULL)
        {
            std::cout << temp->data << " - ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
}

template <typename T>
bool DoublyLinkedList<T>::empty()
{
    return head == NULL || tail == NULL;
}

template <typename T>
std::size_t DoublyLinkedList<T>::size()
{
    int size = 0;
    Node_dll<T>* temp = head;
    while(temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}
template <typename T>
void DoublyLinkedList<T>::addFront(const T& newElement)
{
    n = new Node_dll<T>;
    n->data = newElement;
    n->next = head;
    if (this->empty())
    {
        tail = n;
    }
    else
    {
        head->prev = n;
    }
    head = n;
}
template <typename T>
void DoublyLinkedList<T>::removeFront()
{
    if (this->empty())
    {
        std::cout << "you cant remove object form empty list" << std::endl;
    }
    else
    {
        Node_dll<T>* temp = head;
        head = head->next;
        delete temp;
        if(head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
    }
    
}
template <typename T>
void DoublyLinkedList<T>::addBack(const T& newElement)
{
    n = new Node_dll<T>;
    n->data = newElement;
    n->prev = tail;
    if(this->empty())
    {
        head = n;
    }
    else
    {
        tail->next = n;
    }
    tail = n;

}
template <typename T>
void DoublyLinkedList<T>::removeBack()
{
    if (this->empty())
    {
        std::cout << "you cant remove object form empty list" << std::endl;
    }
    else
    {
        Node_dll<T>* temp = tail;
        tail = tail->prev;
        delete temp;
        if(tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
    }
    
}
template <typename T>
const T& DoublyLinkedList<T>::front() const
{
    static T t;
    if (head == NULL && tail == NULL)
    {
        std::cout << "list is empty" << std::endl;
    }
    else
    {
        t = head->data;
        return t;
    }
}
template <typename T>
const T& DoublyLinkedList<T>::back() const
{
    static T t;
    if (head == NULL && tail == NULL)
    {
        std::cout << "list is empty" << std::endl;
    }
    else
    {
        t = tail->data;
        return t;
    }
}
template <typename T>
void DoublyLinkedList<T>::insert(const T& newElement, int index)
{
    n = new Node_dll<T>;
    n->data = newElement;
    if (index > this->size() || index < 0)
    {
        std::cout << "invalid index"; 
        return;
    }

    if (this->empty())
    {
        head = n;
        tail = n;
    }
    else if (index == 0)
    {
        n->next = head;
        head->prev = n;
        head = n;
    }
    else if (index == this->size())
    {
        n->prev = tail;
        tail->next = n;
        tail = n;
    }
    else
    {
        Node_dll<T>* temp = head;
        int i = 0;
        while(i<index)
        {
            temp = temp->next;
            i++;
        }
        Node_dll<T>* temp2 = temp->prev;
        n->next = temp;
        n->prev = temp2;
        temp2->next = n;
        temp->prev = n;

    }
    
}
template <typename T>
void DoublyLinkedList<T>::remove(const T& element)
{
    Node_dll<T>* temp = head;
    Node_dll<T>* temp2;
    Node_dll<T>* temp3;
    while (temp != NULL)
    {
        if(temp->data == element)
        {
            if(temp == head)
            {
                this->removeFront();
            }
            else if(temp == tail)
            {
                this->removeBack();
            }
            else
            {
                temp2 = temp->prev;
                temp3 = temp->next;
                delete temp;
                temp2->next = temp3;
                temp3->prev = temp2;
            }
        }
        temp = temp->next;
    }
}

template <typename T>
T& DoublyLinkedList<T>::operator[](int index)
{
    static T t;
    Node_dll<T>* temp = head;
    assert(!(index >= size() || index < 0)); // invalid index
    for(int i = 0; i < index; i++)
    {
        temp = temp->next;
    }
    t = temp->data;

    return t;
}

#endif // DATA_STRUCTURES_DOUBLY_LINKED_LIST_HPP
