#include <iostream>
#include "Queue.h"
using namespace std;
int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(50);
    q.enqueue(34);

    q.dequeue();
    q.dequeue();

    cout << "" << q.frontElement() << endl;
    return 0;
}
