#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <vector>

template <typename Comparable>
class Heap
{

public:
    explicit Heap(int capacity = 100);
    explicit Heap(const std::vector<Comparable>& items);
    bool isEmpty() const;
    const Comparable& findMin() const;

    void insert(const Comparable& x);
    void insert(Comparable&& x);
    void deleteMin();
    void deleteMin(Comparable& minItem);
    void makeEmpty();

    int leftChildIndex(int index){
        return 2*index;
    }
    int rightChildIndex(int index){
        return 2*index + 1;
    }

    int parentIndex(int index){
        return index/2;
    }
    void print(){
        for (int i = 1; i < currentSize+1; ++i) {
            
           std::cout <<array[i] << " "; 
        }
        std::cout << std::endl;
    }

    virtual ~Heap(){}
private:
    int currentSize;
    std::vector<Comparable> array;
    void buildHeap(){
        for (int i = currentSize/2; i > 0; --i) {
            percolateDown(i);
        }
    }
    void percolateDown(int hole){
    int minIdx;
    Comparable tmp = std::move(array[hole]);

    for(; hole*2 <= currentSize; hole = minIdx){
    
       auto leftChildIdx = hole*2;  //left child index
       auto rightChildIdx = leftChildIdx+1; // right child index
       minIdx = leftChildIdx;
        // Check minimum at leftIndex or RightIndex
        if (leftChildIdx != currentSize && array[rightChildIdx] < array[leftChildIdx])
            minIdx= rightChildIdx; //++ child; // move to right child

        if (array[minIdx] < tmp)
            array[hole] = std::move(array[minIdx]);
        else
            break;
    }

    array[hole] = std::move(tmp);

    }
};

#endif /* HEAP_H */


template <typename Comparable>
Heap<Comparable>::Heap(int capacity)
    :array(capacity+1),currentSize{0}
{
}


template <typename Comparable>
Heap<Comparable>::Heap(const std::vector<Comparable>& items)
    :array(items.size()+10), currentSize{items.size()}{
    for (int i = 0; i < items.size(); ++i) {
        array[i+1] = items[i];
    }
    buildHeap();
}

template <typename Comparable>
bool Heap<Comparable>::isEmpty() const
{
    return currentSize==0;

}


template <typename Comparable>
void Heap<Comparable>::insert(const Comparable& x)
{
    if(currentSize == array.size()-1)
        array.resize(array.size()*2);

    // Percolate up
    
    int hole = ++currentSize;

    Comparable copy = x;

    array[0] = std::move(copy);

    for (; x < array[parentIndex(hole)]; hole/=2) {
        array[hole] = std::move(array[parentIndex(hole)]);  // Swap 
    }

    array[hole] = std::move(array[0]);
}

template <typename Comparable>
void Heap<Comparable>::insert(Comparable&& x)
{
    if(currentSize == array.size()-1)
        array.resize(array.size()*2);

    // Percolate up
    
    int hole = ++currentSize;
    for (; hole > 1 &&  x < array[parentIndex(hole)]; hole/=2) {
        array[hole] = std::move(array[parentIndex(hole)]);  // Swap 
    }

    array[hole] = std::move(x);
}

template <typename Comparable>
const Comparable& Heap<Comparable>::findMin() const
{

    if(isEmpty()){
        std::cout << "Empty Heap" << std::endl;
    }else{
        return array[1];
    }
}
template <typename Comparable>
void Heap<Comparable>::deleteMin()
{
    if(isEmpty()){
        std::cout << "Empty heap...!" << std::endl;
    }else{
    array[1] = std::move(array[currentSize--]);
    percolateDown(1);
    }

}
template <typename Comparable>
void Heap<Comparable>::deleteMin(Comparable& minItem){
    if(isEmpty()){
        std::cout << "Empty heap...!" << std::endl;
    }else{
    minItem = std::move(array[currentSize--]);
    array[1] = std::move(array[currentSize--]);
    percolateDown(1);
    }

}

template <typename Comparable>
void Heap<Comparable>::makeEmpty()
{
     currentSize =0;

}


