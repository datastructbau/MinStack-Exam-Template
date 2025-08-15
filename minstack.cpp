// minstack.cpp
#include "minstack.h"

void MinStack::push(int value) {
    mainStack.push(value);
    if (minStack.empty() || value <= minStack.top()) {
        minStack.push(value);
    }
}

void MinStack::pop() {
    if (mainStack.empty()) return;
    if (mainStack.top() == minStack.top()) {
        minStack.pop();
    }
    mainStack.pop();
}

int MinStack::top() {
    return mainStack.top();
}

// STUDENT TASK: Implement this
int MinStack::getMin() {
    // YOUR CODE HERE
    return -1; // Placeholder
}
