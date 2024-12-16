#include<iostream>
class Node
{
private:
		int data; 
		Node* next;
public:
		Node()
		{
			data=0;
			next=NULL;
		}
		Node(int data)
		{
			this->data=data;
			this->next=NULL;

		}
		void setData(int data)
		{
			this->data=data;
		}
		void setNext(Node* next)
		{
			this->next=next;
		}
		int getData()
		{
			return data;
		}
		Node* getNext()
		{
			return next;
		}

};
