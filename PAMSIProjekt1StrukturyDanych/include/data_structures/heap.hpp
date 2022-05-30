#ifndef DATA_STRUCTURES_HEAP_HPP
#define DATA_STRUCTURES_HEAP_HPP

template <typename T>
class Heap
{
  public:
    Heap();
    explicit Heap(std::size_t initialCapacity);
    void insert(const T& newElement);
    void removeMax();
    std::size_t size();
    bool empty();
    T& operator[](int index);
    void printArray();
  private:
    T* heap;
    int elementsAmount;
    void extendArray();
    std::size_t capacity;
};

template <typename T>
void Heap<T>::extendArray()
{
    capacity *= 2;
    T* newArray = new T[capacity];
    T* pointer = heap;
    T* tempheap = heap;
    T* tempnew = newArray;
    for (int i = 0; i < this->elementsAmount+1; i++)
    {
        *tempnew = *tempheap;
        tempnew++;
        tempheap++;
    }
    heap = newArray;
    delete [] pointer;
}

template <typename T>
void Heap<T>::printArray()
{
    T* temp = &heap[1];
    while(temp != &heap[elementsAmount+1])
    {
        std::cout << *temp << " | ";
        temp++;
    }
    std::cout << std::endl;
}

template <typename T>
Heap<T>::Heap()
{
    this->capacity = 9;
    heap = new T[capacity];
    elementsAmount = 0;
}

template <typename T>
Heap<T>::Heap(std::size_t initialCapacity)
{
    if(initialCapacity < 2)
    {
        std::cout << "capacity has to be greater than 1" << std::endl;
        return;
    }
    this->capacity = initialCapacity;
    heap = new T[capacity];
    elementsAmount = 0;
}

template <typename T>
void Heap<T>::insert(const T& newElement)
{
    elementsAmount++;
    heap[elementsAmount] = newElement;
    int temp = elementsAmount;
    int temp2 = elementsAmount;
    T temp3;
    while(temp != 1)
    {
        temp = temp/2;
        if(heap[temp] < heap[temp2])
        {
            temp3 = heap[temp];
            heap[temp] = heap[temp2];
            heap[temp2] = temp3;
        }
        temp2 = temp2/2;
    }
    if(size()+1 == capacity)
    {
        this->extendArray();
    }
}

template <typename T>
void Heap<T>::removeMax()
{
    heap[1] = heap[elementsAmount];
    elementsAmount--;
    int bufor = 1;
    T temp;
    while((heap[bufor] < heap[2*bufor] || heap[bufor] < heap[2*bufor + 1]) && 2*bufor <= elementsAmount)
    {
        if(heap[2*bufor] >= heap[2*bufor + 1] && 2*bufor <= elementsAmount)
        {
            temp = heap[bufor];
            heap[bufor] = heap[2*bufor];
            heap[2*bufor] = temp;
            bufor = 2*bufor;
        }
        else if(heap[2*bufor] < heap[2*bufor + 1] && 2*bufor + 1 <= elementsAmount)
        {
            temp = heap[bufor];
            heap[bufor] = heap[2*bufor + 1];
            heap[2*bufor + 1] = temp;
            bufor = 2*bufor + 1;
        }
    }
}

template <typename T>
std::size_t Heap<T>::size()
{
    return elementsAmount;
}

template <typename T>
bool Heap<T>::empty()
{
    return elementsAmount == 0;
}

template <typename T>
T& Heap<T>::operator[](int index)
{
    static T t;
    t = heap[index];

    return t;
}

#endif // DATA_STRUCTURES_HEAP_HPP
