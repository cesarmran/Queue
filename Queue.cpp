#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue(int capacity) {
    front = -1;
    rear = -1;
    size = capacity;
    queue = new int[capacity];
}
bool Queue::isEmpty() {
    return front == -1;
}

bool Queue::isFull() {
    return rear == size;
}

void Queue::enqueue(int value) {
    if(isFull()) {
        cout << "Queue está lleno " << endl;
        return;
    }
    if (front == -1) {
        front = 0;
    }
    queue[++rear] = value;
    cout << value << " Enqueue to queue " << endl;
}

void Queue::dequeue() {
    if(isEmpty()) {
        cout << "Empty queue " << endl;;
        return;
    }
    cout << queue[front] << " Dequeue front " << endl;;
    front++;

    if(front > rear) {
        front = -1;
        rear = -1;
    }
}

int Queue::frontElement() {
    if(isEmpty()) {
        cout << "Empty queue " << endl;
        return -1;
    }
    return queue[front];

}

Queue::~Queue() {
    delete[] queue;
}


