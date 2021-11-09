#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node* head;
	node* next;
	node(int val)
	{
		data = val;
		next=NULL;
	}
};
void InsertAtTail(node*& head, int val)
{
	if (head == NULL)
	{
		return;
	}
	node* n = new node(val);
	node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}
int main()
{

}