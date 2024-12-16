#include <iostream>
#include <conio.h>
#include "Queue.h"
using namespace std;

int main() 
{

    Queue queue;

    cout << "Enqueuing elements into the queue...\n";
    queue.enQueue(10);
    queue.enQueue(20);
    queue.enQueue(30);

    cout << "Current state of the queue:\n";
    queue.print();

    cout << "\nDequeuing one element...\n";
    queue.deQueue();

    cout << "State of the queue after dequeue:\n";
    queue.print();

    cout << "\nChecking if the queue is empty...\n";
    if (queue.isEmpty()) 
    {
        cout << "The queue is empty.\n";

    } 
    else 
    {
        cout << "The queue is not empty.\n";
    }
    getch ();
    return 0;
}