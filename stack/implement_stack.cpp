#include <bits/stdc++.h> 
// Stack class.
class Stack {
private:
    int index;
    int _capacity;
    int *stack;   

public:
    
    Stack(int capacity) {
        _capacity = capacity;
        index = -1;
        stack = new int[capacity];
    }

    void push(int num) {
        index++;
        stack[index] = num;
    }

    int pop() {
        if (index == -1) return -1;
        int top = stack[index];
        index--;
        return top;
    }
    
    int top() {
        if (index == -1) return -1;
        return stack[index];
    }
    
    int isEmpty() {
        return index == -1;
    }
    
    int isFull() {
        return index == _capacity-1;
    }
    
};
