#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enQueue(int value)
{
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = NULL;
	if (front == NULL && rear == NULL)
	{
		front = newNode;
		rear = newNode;
	}
	else
	{
		rear->next = newNode;
		rear = newNode;
	}

}
void display()
{
	if (front == NULL && rear == NULL)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		Node* current;
		current = front;
		while (current != NULL)
		{
			cout << current->data << " ";
			current = current->next;
		}
		cout << endl;
	}
}

void DeQueue()
{
	if (front == NULL && rear == NULL)
	{
		cout << "Queue is empty" << endl;
	}
	else if (front == rear)
	{
		Node* temp;
		temp = front;
		front = NULL;
		rear = NULL;
		delete(temp);
	}
	else
	{
		Node* temp;
		temp = front;
		front = front->next;
		delete(temp);

	}

}

void peek()
{
	if (front == NULL && rear == NULL)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		cout << front->data << endl;
	}
}
bool isEmpty()
{
	if (front == NULL && rear == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	enQueue(10);
	enQueue(20);
	enQueue(30);
	peek();
	display();
}

