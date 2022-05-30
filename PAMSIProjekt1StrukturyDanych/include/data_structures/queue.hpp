#ifndef QUEUE_HPP_
#define QUEUE_HPP_

// TODO: zaimplementuj klasę Queue - kolejka z implementacją tablicową cykliczną
template <typename T>
class Queue
{
  public:
    Queue();
    explicit Queue(std::size_t initialCapacity);
    void enqueue(const T& newElement);
    T dequeue();
    bool empty();
    std::size_t size();
    const T& front();
  private:
    T* queue;
    T* tail;
    T* head;
    std::size_t capacity;
    void extendArray();
};

template <typename T>
Queue<T>::Queue()
{
    capacity = 8;
    queue = new T[capacity];
    head = queue;
    tail = queue;
}

template <typename T>
Queue<T>::Queue(std::size_t initialCapacity)
{
    queue = new T[initialCapacity];
    capacity = initialCapacity;
    head = queue;
    tail = queue;
}

template <typename T>
void Queue<T>::enqueue(const T& newElement)
{
/*     if(head - queue == capacity -1)
    {
        *head = newElement;
        head = queue;
    }
    if(tail == head)
    {
        extendArray();
    } */


    if(head - queue == capacity-1&&tail != queue)
    {
        *head = newElement;
        head = queue;
    }
    else if(head - queue == capacity-1&&tail == queue)
    {
        extendArray();
        *head = newElement;
        head++;
    }
    else if(head == tail)
    {
        extendArray();
        *head = newElement;
        head++;
    }
    else
    {
        *head = newElement;
        head++;
    }
}

template <typename T>
T Queue<T>::dequeue()
{
    T temp = *tail;
    if(tail == queue+capacity-1)
    {
        tail = queue;
    }
    else if(tail == head)
    {
        std::cout << "Kolejka jest pusta" << std::endl;
    }
    else
    {
        tail++;
    }
    return temp;
}

template <typename T>
bool Queue<T>::empty()
{
    return (tail==head);
}

template <typename T>
std::size_t Queue<T>::size()
{
    if (head>=tail)
        return head-tail;
    else
        return head-tail+capacity;
    
}

template <typename T>
const T& Queue<T>::front()
{
    static T t;
    T* temp = head;
    t = *(--temp);
    return t;
}

template <typename T>
void Queue<T>::extendArray()
{
    T* pointer = this->queue;
    this->capacity *=2 ;
    Queue<T> temp(this->capacity);
    while (this->size()!=0)
        {
            temp.enqueue(this->dequeue());
        }
    this->head = temp.head;
    this->tail = temp.tail;
    this->queue = temp.queue;
    delete [] pointer;
}

#endif /* QUEUE_HPP_ */
