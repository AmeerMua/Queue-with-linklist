#include<iostream>
#include "Node.h"
class Queue
{
private:
		Node *front;
		Node * rear;

public:
		Queue()
		{
			front = NULL;
			rear = NULL;
		}
		void enQueue(int);
		void deQueue();
		bool isEmpty();
		void print();

};