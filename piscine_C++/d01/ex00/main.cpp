#include "Pony.hpp"
#include <iostream>

Pony    *ponyOnTheHeap()
{
    Pony *heap = new Pony("Heap", "double pony", 5);
    std::cout << "heap address in ponyOnTheHeap: " << heap << std::endl;
    heap->presentation();
    std::cout << std::endl;
    delete heap;
    return heap;
}

Pony    *ponyOnTheStack()
{
    Pony stack("Stack", "black stalion", 8);
    std::cout << "stack address in ponyOnTheStack: " << &stack << std::endl;
    stack.presentation();
    std::cout << std::endl;    
    return &stack;
}

int main()
{
    Pony *heap = ponyOnTheHeap();
    Pony *stack = ponyOnTheStack();

    std::cout << "heap address in main: " << heap << std::endl;
    // heap->presentation(); //segfault
    std::cout << "stack address in main: " << stack << std::endl;
    // stack->presentation(); //segfault
}