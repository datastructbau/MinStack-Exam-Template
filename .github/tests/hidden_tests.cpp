#include "../minstack.h"
#include <cassert>

void run_hidden_tests() {
    // Test 1: Basic functionality
    MinStack s1;
    s1.push(10);
    s1.push(20);
    assert(s1.getMin() == 10);
    
    // Test 2: Duplicate minimums
    MinStack s2;
    s2.push(5);
    s2.push(5);
    s2.push(8);
    assert(s2.getMin() == 5);
    s2.pop();
    assert(s2.getMin() == 5);
    
    // Test 3: Empty stack handling
    MinStack s3;
    s3.push(100);
    s3.pop();
    // getMin() behavior undefined when empty - not testing
    
    // Test 4: Large numbers
    MinStack s4;
    s4.push(1000);
    s4.push(-1000);
    assert(s4.getMin() == -1000);
}
