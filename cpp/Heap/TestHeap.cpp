#include <iostream>
#include <string>

#include "heap.h"


int main(int argc, char *argv[])
{
    Heap<std::string> h;
    h.insert("A");
    h.insert("B");
    h.insert("D");
    h.insert("F");
    h.insert("C");
    h.insert("E");

    h.print();

    std::vector<int> v{1,2,5,3,6,4};
    Heap<int> h2{v};

    h2.print();

    return 0;
}
