#include <iostream>
using namespace std;

// Overflow Exception
class overflow {
public:
    overflow() {
        cout << "Queue FULL!!" << endl;
    }
};

// Underflow Exception
class underflow {
public:
    underflow() {
        cout << "Queue EMPTY!!" << endl;
    }
};

// Queue Template Class
template <class T>
class queue {
    int front;
    int rear;
    int size;
    int count;  // To track the number of elements in the queue
    T* data;

public:
    queue(int);           // Constructor
    void enqueue(T);      // Add an element
    T dequeue();          // Remove an element
    void disp();          // Display queue elements
    ~queue();             // Destructor to free memory
};

// Constructor
template <class T>
queue<T>::queue(int x) {
    front = 0;
    rear = 0;
    size = x;
    count = 0;
    data = new T[x];
}

// Destructor
template <class T>
queue<T>::~queue() {
    delete[] data;
}

// Enqueue Method
template <class T>
void queue<T>::enqueue(T x) {
    if (count == size) {  // Check if the queue is full
        throw overflow();
    }
    data[rear] = x;             // Add the element at the rear
    rear = (rear + 1) % size;   // Move rear in a circular manner
    count++;                    // Increment the count
}

// Dequeue Method
template <class T>
T queue<T>::dequeue() {
    if (count == 0) {  // Check if the queue is empty
        throw underflow();
    }
    T value = data[front];       // Get the front element
    front = (front + 1) % size;  // Move front in a circular manner
    count--;                     // Decrement the count
    return value;
}

// Display Queue Elements
template <class T>
void queue<T>::disp() {
    if (count == 0) {
        cout << "Queue is empty!" << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = 0; i < count; i++) {
        cout << data[(front + i) % size] << " ";
    }
    cout << endl;
}

// Main Function
int main() {
    queue<char> q(5);  // Create a queue of size 5

    try {
        q.enqueue('A');
        q.enqueue('B');
        q.enqueue('C');
        q.enqueue('D');
        q.enqueue('E');
        q.enqueue('F');  // This will throw an overflow exception
    } catch (overflow& of) {
    }

    q.disp();

    try {
        cout << "Dequeued: " << q.dequeue() << endl;
        cout << "Dequeued: " << q.dequeue() << endl;
        cout << "Dequeued: " << q.dequeue() << endl;
        cout << "Dequeued: " << q.dequeue() << endl;
        cout << "Dequeued: " << q.dequeue() << endl;
        cout << "Dequeued: " << q.dequeue() << endl;  // This will throw an underflow exception
    } catch (underflow& uf) {
    }

    q.disp();

    return 0;
}
