#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* top = NULL;

void push(int value)
{
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = top;
	top = newNode;
}
void display()
{
	Node* current;
	if (top == NULL)
	{
		cout << "stack is underflow" << endl;
	}
	else
	{

		current = top;
		while (current != NULL)
		{
			cout << current->data << " ";
			current = current->next;
		}
	}
}
int pop()
{
	if (top == NULL)
	{
		cout << "stack is underflow" << endl;
		return -1;
	}
	else
	{
		int value = 0;
		Node* firstNode = top;
		top = firstNode->next;
		value = firstNode->data;
		delete(firstNode);
		return value;
	}
}
int peek()
{
	if (top == NULL)
	{
		cout << "stack is underflow" << endl;
		return -1;
	}
	else
	{
		int value = 0;
		value = top->data;
		return value;
	}
}
int main()
{
	push(10);
	push(20);
	push(30);
	display();
	cout << endl;
	cout << pop();
	cout << endl;
	display();
	cout << endl;
	cout << peek();

}

