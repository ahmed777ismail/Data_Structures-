#include <iostream>
using namespace std;

struct node {
	int value = 0;
	node* next;
};

node* head = NULL;

void inserNode(int data) {
	node* newNode;
	node* last;
	newNode = new node;
	newNode->value = data;
	if (head == NULL)
	{
		head = newNode;
		newNode->next = NULL;
	}
	else
	{
		last = head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newNode;
		newNode->next = NULL;
	}

}
void insertNodeAtTheBigging(int data) {
	node* newNode;
	newNode = new node;
	newNode->value = data;
	newNode->next = head;
	head = newNode;
}

void display() {

	node* currendNode;
	if (head == NULL)
	{
		cout << "Linked List Is Empty ";
	}
	else
	{
		currendNode = head;
		while (currendNode != NULL)
		{
			cout << currendNode->value << endl;
			currendNode = currendNode->next;
		}
	}
}
int main()
{
	inserNode(20);
	inserNode(30);
	inserNode(40);
	display();
	insertNodeAtTheBigging(60);
	display();

}

