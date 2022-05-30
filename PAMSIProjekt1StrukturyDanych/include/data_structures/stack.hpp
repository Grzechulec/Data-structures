#ifndef STACK_HPP_
#define STACK_HPP_

#include <cassert>

// TODO: zaimplementuj klasę Stack - stos z implementacją tablicową
template <typename T>
class Stack
{
  public:
    Stack();
    explicit Stack(std::size_t initialCapacity);
    void push(const T& newElement);
    T pop();
    bool empty();
    std::size_t size();
    const T& top();
    void print();
  private:
    void extendArray();  // dafault: multiplying x2
    std::size_t capacity;
    T* stack;
    T* head;
};

template <typename T>
void Stack<T>::print()
{
    T* temp = stack;
    while(temp!=head)
    {
      std::cout << *temp << " - ";
      temp++;
    }
    std::cout << std::endl;
}

template <typename T>
Stack<T>::Stack()
{
    this->capacity = 8;
    stack = new T[capacity];
    head = stack;
}

template <typename T>
Stack<T>::Stack(std::size_t initialCapacity)
{
    stack = new T[initialCapacity];
    capacity = initialCapacity;
    head = stack;
}

template <typename T>
void Stack<T>::push(const T& newElement)
{
    *head = newElement;
    head++;
    if(capacity==size())
    {
      extendArray();
    }
      
}

template <typename T>
T Stack<T>::pop()
{
  head--;
  return *head;
}

template <typename T>
bool Stack<T>::empty()
{
    return head==stack;
}

template <typename T>
std::size_t Stack<T>::size()
{
    return head - stack;
}

template <typename T>
const T& Stack<T>::top()
{
    static T t;
    T* temp = head;
    t = *(--temp);
    return t;
}

template <typename T>
void Stack<T>::extendArray()
{
    T* pointer = this->stack;
    capacity *= 2;
    Stack<T> temp(capacity);
    while (this->size()!=0)
    {
      temp.push(this->pop());
    }
    Stack temp2(capacity);
    while (temp.size()!=0)
    {
      temp2.push(temp.pop());
    }
    this->stack = temp2.stack;
    this->head = temp2.head;
    delete [] pointer;
}

#endif /* STACK_HPP_ */
