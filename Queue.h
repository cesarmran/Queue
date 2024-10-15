#ifndef QUEUE_H
#define QUEUE_H



class Queue {
private:
    int front; // Indice del frente de la cola
    int rear; // Indice del final de la cola
    int size; //
    int* queue;
public:
    Queue(int capacity);
    bool isEmpty();
    bool isFull();
    void enqueue(int value);
    void dequeue();
    int frontElement();
    ~Queue();
};



#endif //QUEUE_H
