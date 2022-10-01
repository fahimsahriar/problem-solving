#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};
void insert_at_head(Node* &head,int data)
{
	Node *new_node = new Node();
	new_node->data = data;
	new_node->next = head;
	head = new_node;
	cout<<data<<" inserted at head"<<endl;
}
void insert_after(Node* &head,int key,int data)
{

	Node* last = head;
	int t = 0;
	while(last->data!=key&&last->next!=NULL)
	{
		last = last->next;
		t = 1;

	}
	if(t==1)
		cout<<"Not found"<<endl;
	else
	{
		cout<<"found:"<<last->data<<endl;
		Node *new_node = new Node();
		new_node->data = data;

		//continue here!!!!!
	}

}

void printList(Node *n)
{
	if(n==NULL)
	{
		cout<<"The list is empty"<<endl;
		return;
	}
	Node *head = n;
	cout<<"Linked list:";
	while(head!=NULL)
	{
		cout<<(head->data)<<" ";
		head = head->next;
	}
	cout<<endl;
}
void append_element_in_last(Node* &head, int data)
{

	Node *new_node = new Node();
	new_node->data = data;
	new_node->next = NULL;

	if(head == NULL)
	{
		insert_at_head(head,data);
		// cout<<"Inserting "<<data<<" as first element !!"<<endl;
		// head = new_node;
		return;
	}

	Node* last = head;
	while(last->next!=NULL)
	{
		last = last->next;

	}
	last->next = new_node;
	cout<<data<<" inserted to the end"<<endl;
}

void delete_last(Node* &head)
{
	if(head==NULL)
	{
		cout<<"Ubale to delete, the list is empty"<<endl;
		return;
	}
	else if(head->next==NULL)
	{
		cout<<"Deleting "<<head->data<<" as the last element of list"<<endl;
		head = NULL;
		return;
	}

	Node *temp = head;
	while(temp->next->next!=NULL)
	{
		temp = temp->next;
	}
	cout<<temp->next->data<<" is deleted."<<endl;
	temp->next = NULL;

}

int main()
{
	Node *head = NULL;
	delete_last(head);
	printList(head);
	//traversing function of the whole linked
	append_element_in_last(head,10);
	printList(head);
	delete_last(head);
	append_element_in_last(head,12);
	append_element_in_last(head,13);
	insert_at_head(head,5);
	append_element_in_last(head,124);
	printList(head);
	insert_after(head,7,10);
	delete_last(head);
	delete_last(head);
	delete_last(head);
	delete_last(head);
	printList(head);

	return 0;
}
