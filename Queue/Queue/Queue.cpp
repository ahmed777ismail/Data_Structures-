#include <iostream>
using namespace std;

const int Size = 3;
int Queue[Size];
int front = -1;
int rear = -1;

void endQueue(int value)
{
	if (rear == Size - 1)
	{
		cout << "Queue is full can not put this value" << endl;
		cout << value << endl;
	}
	else if (front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
		Queue[rear] = value;
	}
	else
	{
		rear++;
		Queue[rear] = value;
	}
}
void display()
{

	if (front != -1 && rear != -1)
	{
		for (int i = front; i <= rear; i++)
		{
			cout << Queue[i] << " ";
		}
		cout << endl;
	}
	else
	{
		cout << "Queue is empty" << endl;
	}

}
int DeQueue()
{
	int value = 0;
	if (front == -1 && rear == -1)
	{
		cout << "Queue is empty" << endl;
	}
	else if (front == rear)
	{
		value = Queue[front];
		front = -1;
		rear = -1;
	}
	else
	{
		value = Queue[front];
		front++;
	}
	return value;
}
bool isEmpty()
{
	if (front == -1 && rear == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isFull()
{
	if (rear == Size - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void frontValue()
{
	if (front == -1 && rear == -1)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		cout << "Front Value Is " << Queue[front] << endl;
	}
}
int main()
{
	endQueue(10);
	endQueue(20);
	endQueue(30);
	frontValue();
	
}

