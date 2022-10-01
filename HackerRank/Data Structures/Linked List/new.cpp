#include <bits/stdc++.h>
#include<iostream>
using namespace std;


class student
{
public:
	string name;
	int id;
};
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
void delete_element(Node *n)
{
	
}

int main()
{
	//testing the class's functionality

	student fahim;

	cin>>fahim.id;
	cout<<fahim.id<<endl;
	//testing the class's functionality

	int a;
	a = 5;
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

	third->data = 7;
	third->next = NULL;

	cout<<second->data<<endl;
	cout<<second->next<<endl;

	cout<<a<<endl;

	//traversing function of the whole linked
	printList(head);

	return 0;
}
