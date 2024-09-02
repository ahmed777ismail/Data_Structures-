#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node* prev;
};
Node* head = NULL;
//insert node
void insertNode(int value)
{
	Node* new_node = new Node();
	new_node->data = value;

	if (head == NULL)
	{
		head = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;

	}
	else
	{
		Node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
		new_node->next = NULL;
	}
}
void display()
{
	if (head == NULL)
	{
		cout << "Double linked list is empty" << endl;
	}
	else
	{
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
}

void insertNodeAtBegin(int value)
{
	Node* new_node = new Node();
	new_node->data = value;

	new_node->prev = NULL;
	new_node->next = NULL;

	if (head == NULL)
	{
		head = new_node;
	}
	else
	{
		head->prev = new_node;
		new_node->next = head;
		head = new_node;
	}
}

void revdisply()
{
	Node* temp = head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->prev;
	}
	cout << endl;
}

void deleteFirstNode()
{
	if (head != NULL)
	{
		Node* temp = head;
		head = head->next;
		free(temp);
		head->prev = NULL;
	}
	else
	{
		cout << "Double linked list is empty" << endl;
	}
}

void deleteLastNode()
{
	if (head->next == NULL)
	{
		head = NULL;
	}
	else
	{
		Node* temp = head;
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		Node* lastNode = temp->next;
		temp->next = NULL;
		lastNode->prev = NULL;
		free(lastNode);

	}
}
int main()
{



	insertNode(20);
	insertNode(30);
	insertNode(40);
	insertNode(50);
	display();
	deleteLastNode();
	display();


	return 0;
}

