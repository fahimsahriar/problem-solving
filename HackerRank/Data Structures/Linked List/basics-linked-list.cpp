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
	while(n!=NULL)
	{
		cout<<"The data of"<<n<<" is:"<<(n->data)<<endl;
		n = n->next;
	}
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

	cout<<second->data<<endl;
	cout<<second->next<<endl;

	//traversing function of the whole linked
	printList(head);

	return 0;
}
