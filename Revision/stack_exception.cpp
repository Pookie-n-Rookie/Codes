#include <iostream>
using namespace std;

// Overflow Exception
class overflow {
public:
    overflow() {
        cout << "Stack FULL!!" << endl;
    }
};

// Underflow Exception
class underflow {
public:
    underflow() {
        cout << "Stack EMPTY!!" << endl;
    }
};

// Stack Template Class
template <class T>
class stack {
    int top;  // Index of the top element
    int size; // Maximum size of the stack
    T* data;  // Array to hold stack elements

public:
    stack(int);      // Constructor
    void push(T);    // Push an element onto the stack
    T pop();         // Pop an element from the stack
    void disp();     // Display stack elements
    ~stack();        // Destructor to free memory
};

// Constructor
template <class T>
stack<T>::stack(int x) {
    top = -1;
    size = x;
    data = new T[x];
}

// Destructor
template <class T>
stack<T>::~stack() {
    delete[] data;
}

// Push Method
template <class T>
void stack<T>::push(T x) {
    if (top == size - 1) {  // Check if the stack is full
        throw overflow();
    }
    data[++top] = x;  // Increment `top` and add the element
}

// Pop Method
template <class T>
T stack<T>::pop() {
    if (top == -1) {  // Check if the stack is empty
        throw underflow();
    }
    return data[top--];  // Return the top element and decrement `top`
}

// Display Stack Elements
template <class T>
void stack<T>::disp() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

// Main Function
int main() {
    stack<char> s(5);  // Create a stack of size 5

    try {
        s.push('A');
        s.push('B');
        s.push('C');
        s.push('D');
        s.push('E');
        s.push('F');  // This will throw an overflow exception
    } catch (overflow& of) {
    }

    s.disp();

    try {
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;
        cout << "Popped: " << s.pop() << endl;  // This will throw an underflow exception
    } catch (underflow& uf) {
    }

    s.disp();

    return 0;
}
