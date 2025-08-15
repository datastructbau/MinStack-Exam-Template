// public_test.cpp
#include "minstack.h"
#include <iostream>

int main() {
    MinStack s;
    s.push(3);
    s.push(5);
    std::cout << "Current min: " << s.getMin() << " (Expected: 3)\n";
    
    s.push(2);
    std::cout << "Current min: " << s.getMin() << " (Expected: 2)\n";
    
    s.pop();
    std::cout << "Min after pop: " << s.getMin() << " (Expected: 3)\n";
    return 0;
}
