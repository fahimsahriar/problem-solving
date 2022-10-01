#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};

void printList(Node *n)
{
	cout<<"Linked list elements:";
	while(n!=NULL)
	{
		cout<<(n->data)<<" ";
		n = n->next;
	}
	cout<<endl;
}
void append_element_in_last(Node *head, int data)
{
	cout<<"Inserting "<<data<<" in the last position"<<endl;
	Node *new_node = new Node();
	new_node->data = data;

	Node *last;
	last = head;
	while(last->next!=NULL)
	{
		last = last->next;
	}
	cout<<"A node is inserted next to :"<<last->data<<" !!"<<endl;
	last->next = new_node;
}

int main()
{
	Node *head;
	Node *second;
	Node *third;
	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 5;
	head->next = second;

	second->data = 6;
	second->next = third;

	third->data = 9;
	third->next = NULL;

	//traversing function of the whole linked
	printList(head);
	append_element_in_last(head,10);
	printList(head);
	append_element_in_last(head,12);
	printList(head);

	return 0;
}
