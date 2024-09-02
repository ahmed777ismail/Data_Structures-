#include <iostream>
using namespace std;

const int Size = 4;
int stack[Size];
int top = -1;
void push(int value)
{
	if (top == Size - 1)
	{
		cout << "stack is overflow" << endl;

	}

	else
	{
		top++;
		stack[top] = value;
	}
}
void display()
{
	if (top == -1)
	{
		cout << "stack is empty" << endl;
		return;
	}
	cout << "values of the stack are " << endl;
	for (int i = top; i >= 0; i--)
	{
		cout << stack[i] << " ";
	}
	cout << endl;
}
int pop()
{
	if (top == -1)
	{
		cout << "stack is empty" << endl;
	}
	else
	{
		return stack[top--];
	}
}
void peek()
{
	if (top == -1)
	{
		cout << "stack is empty" << endl;
	}
	else
	{
		cout << stack[top];
	}
}
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	display();
	pop();
	display();
	peek();
}


