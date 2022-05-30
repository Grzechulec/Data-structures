#ifndef DATA_STRUCTURES_SINGLY_LINKED_LIST_HPP
#define DATA_STRUCTURES_SINGLY_LINKED_LIST_HPP

#include <cassert>

template<typename T>
struct Node
{
    T data;
    Node<T>* next = NULL;
};

template <typename T>
class SinglyLinkedList
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
    Node<T>* head = NULL;
    Node<T>* n;
};

template <typename T>
void SinglyLinkedList<T>::print()
{
    Node<T>* temp = head;
    while (temp != NULL)
    {
        std::cout << temp->data << " - ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

template <typename T>
bool SinglyLinkedList<T>::empty()
{
    return this->head == NULL;
}

template <typename T>
std::size_t SinglyLinkedList<T>::size()
{
    int size = 0;
    Node<T>* temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

template <typename T>
void SinglyLinkedList<T>::addFront(const T& newElement)
{
    n = new Node<T>;
    n->data = newElement;
    n->next = head;
    head = n;
}

template <typename T>
void SinglyLinkedList<T>::removeFront()
{
    Node<T>* temp = head;
    if(this->empty())
    {
        std::cout << "list is empty";
    }
    else
    {
        head = head->next;
        delete temp;
    }
}

template <typename T>
void SinglyLinkedList<T>::addBack(const T& newElement)
{   
    n = new Node<T>;
    n->data = newElement;
    Node<T>* temp = head;
    if(this->empty())
    {
        head = n;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}

template <typename T>
void SinglyLinkedList<T>::removeBack()
{
    Node<T>* temp = head;
    Node<T>* temp2 = head;
    if(this->empty())
    {
        std::cout << "You can't remove element form empty list" << std::endl;
    }
    else
    {
        while(temp->next != NULL)
            temp = temp->next;
        while(temp2->next != temp)
            temp2 = temp2->next;
        delete temp;
        temp2->next = NULL;
    }
}

template <typename T>
const T& SinglyLinkedList<T>::front() const
{
    static T t;

    if(this->head == NULL)
    {
        std::cout << "list is empty";
    }
    else
    {
        t = head->data;
    }
    return t;
}

template <typename T>
const T& SinglyLinkedList<T>::back() const
{
    static T t;

    Node<T>* temp = head;
    if(head == NULL)
    {
        std::cout << "list is empty" << std::endl;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        t = temp->data;
    }

    return t;
}

template <typename T>
void SinglyLinkedList<T>::insert(const T& newElement, int index)
{
    n = new Node<T>;
    n->data = newElement;
    Node<T>* temp = head;
    Node<T>* temp2;
    if(index < 0 || index > this->size())
    {
        std::cout << "invalid index" << std::endl;
        return;
    }

    if(this->empty())
    {
        head = n;
    }
    else if(index == 0)
    {
        addFront(newElement);
    }
    else
    {
        for (int i = 0; i < index-1; i++)
        {
            temp = temp->next;
        }
        temp2 = temp->next;
        temp->next = n;
        n->next = temp2;
    }
}

template <typename T>
void SinglyLinkedList<T>::remove(const T& element)
{
    Node<T>* temp = head;
    Node<T>* temp2 = head;
    while(temp != NULL)
    {
        if(temp->data == element)
        {
            if(temp == head)
            {
                head = temp->next;
                delete temp;
            }
            else
            {
                while (temp2->next != temp)
                    temp2 = temp2->next;
                temp2->next = temp->next;
                delete temp;
                temp = temp2;
            }
        }
        temp = temp->next;
    }
}

template <typename T>
T& SinglyLinkedList<T>::operator[](int index)
{
    assert(index >= 0 && index < this->size());
    static T t;
    Node<T>* temp = head;
    for (int i = 0; i < index; i++)
    {
        temp =  temp->next;
    }
    t = temp->data;
    
    return t;
}
#endif // DATA_STRUCTURES_SINGLY_LINKED_LIST_HPP
