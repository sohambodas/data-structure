#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
void insertion(Node** head, int data)
{
	Node* newnode = new Node();
	Node* last = *head;
	newnode->data = data;
	newnode->next = NULL;
	if(*head==NULL)
	{
		*head=newnode;
		return;
	}
	while(last->next != NULL)
	{
		last=last->next;
	}
	last->next=newnode;
}
void print(Node* node)
{
	while(node!=NULL)
	{
		cout<<node->data<<" ";
		node=node->next;
	}
}
int main()
{
	int n,data;
	Node* head = NULL;
    cout<<"numbers you want to enter: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter number: ";
		cin>>data;
		insertion(&head, data);
	}
	print(head);
}
