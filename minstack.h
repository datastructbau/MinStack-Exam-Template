// minstack.h
#include <stack>

class MinStack {
private:
    std::stack<int> mainStack;
    std::stack<int> minStack;  // Tracks minimums
public:
    void push(int value);
    void pop();
    int top();
    int getMin();  // TO BE IMPLEMENTED BY STUDENT
};
