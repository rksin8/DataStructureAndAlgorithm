#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <vector>

template <typename Comparable>
class Heap
{
private:
    int currentSize;
    std::vector<Comparable> array;
    void buildHeap();
    void percolateDown(int hole);

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
        for (auto& i : array) {
           std::cout << i << " "; 
        }
        std::cout << std::endl;
    }

    virtual ~Heap(){}
};

#endif /* HEAP_H */


template <typename Comparable>
Heap<Comparable>::Heap(int capacity)
    :array(capacity),currentSize{0}
{
}


template <typename Comparable>
Heap<Comparable>::Heap(const std::vector<Comparable>& items)
    :array(items.size()+10),currentSize(items.size()){
    for (int i = 0; i < items.size(); ++i) {
        array[i+1] = items[i];
    }
    buildHeap();
}

template <typename Comparable>
void Heap<Comparable>::buildHeap()
{
    for (int i = currentSize/2; i > 0; --i) {
        percolateDown(i);
    }
}

template <typename Comparable>
void Heap<Comparable>::percolateDown(int hole)
{
    int child;
    Comparable tmp = std::move(array[hole]);

    for(; hole*2 <= currentSize; hole = child){
    
        child = hole*2;  //left child index

        if (child != currentSize && array[child+1] < array[child]){
            ++ child;
        }

        if (array[child] < tmp)
            array[hole] = std::move(array[child]);
        else
            break;
    }

    array[hole] = std::move(tmp);

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

    Comparable copy = x;

    array[0] = std::move(copy);

    for (; x < array[parentIndex(hole)]; hole/=2) {
        array[hole] = std::move(array[parentIndex(hole)]);  // Swap 
    }

    array[hole] = std::move(array[0]);
}

template <typename Comparable>
bool Heap<Comparable>::isEmpty() const
{
    return currentSize;

}

template <typename Comparable>
const Comparable& Heap<Comparable>::findMin() const
{
    Comparable x = 5;
    return x;
}
template <typename Comparable>
void Heap<Comparable>::deleteMin()
{

}
template <typename Comparable>
void Heap<Comparable>::deleteMin(Comparable& minItem){

}
template <typename Comparable>
void Heap<Comparable>::makeEmpty()
{


}


