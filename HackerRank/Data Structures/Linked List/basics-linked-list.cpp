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
	int t;
	while(last->data!=key)
	{
		if(last->next==NULL)
		{
			t = 1;
			break;
		}else
		{
			t = 1;
			last = last->next;
		}
		if(last->data==key)
		{
			t = 0;
			break;
		}
	}
	if(t==1)
		cout<<"Not found"<<endl;
	else
	{
		cout<<data<<" added next to "<<last->data<<endl;
		Node *new_node = new Node();
		new_node->data = data;

		new_node->next = last->next;
		last->next = new_node;
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
		//inserting element as first element
		insert_at_head(head,data);
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
	delete temp->next;
	temp->next = NULL;

}
void delete_key(Node* &head, int key)
{
	Node* last = head;
	int t;
	if(last->data==key)
	{
		head = last->next;
		delete last;
		return;
	}
	while(last->data!=key)
	{
		if(last->next==NULL)
		{
			t = 1;
			break;
		}else
		{
			t = 1;
			last = last->next;
		}
		if(last->data==key)
		{
			t = 0;
			break;
		}
	}
	if(t==1)
		cout<<"Not found"<<endl;
	else
	{
		cout<<"found"<<endl;
	}

}

int main()
{
	Node *head = NULL;

	/*//displaying whole link list
	printList(head);*/

	/*//adding an element to the last
	append_element_in_last(head,10);*/

	/*//adding an element to head of list
	insert_at_head(head,1);*/

	/*//inserting after a key, or a postion
	insert_after(head,10,100);*/

	/*//deleting the last element
	delete_last(head);*/

	append_element_in_last(head,10);
	append_element_in_last(head,11);
	append_element_in_last(head,12);
	printList(head);
	delete_key(head,12);



	printList(head);

	return 0;
}
