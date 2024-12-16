#include "Queue.h"
#include <iostream>
using namespace std;

bool Queue::isEmpty()
{
	if(front == NULL && rear == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Queue::deQueue()
{
	if(isEmpty())
	{
		return;
	}
	else
	{
		Node* temp=front;
		front = front->getNext();
		delete temp;
	}
}

void Queue::enQueue(int data)
{
	if(isEmpty())
	{
		Node* new_Node= new Node(data);
		front = new_Node;
		rear = new_Node;
	}
	else
	{
		Node *new_Node= new Node(data);
		rear-> setNext(new_Node);
		rear = new_Node;
		
	}
}

void Queue ::print()

{
	Node *temp = front;
	cout<<"\tData\t\tPriority"<<endl;
	while(temp!=NULL)
	{
		cout<<"\t"<<temp->getData()<<endl;
		temp= temp->getNext();
	}

}