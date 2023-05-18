#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
/*****************************************************************/
Node *midPoint(Node *head)
{
	if(head==NULL)
	return head;
    // Write your code here
	Node *slow= head;
	Node *fast=head->next;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}
/***********************************************/
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
	if(head1==NULL&&head2==NULL)
		return NULL;
	if(head1==NULL)
		return head2 ;
	if(head2==NULL)
	return head1;
	Node *prev=NULL;
	Node *nex=NULL;
        if (head1->data <head2->data) {
          prev = head1;
          nex = head1;
			head1=head1->next;
        }
		else {
			prev = head2;
          nex = head2;
		  head2=head2->next;
		}
        while(head1!=NULL&&head2!=NULL){
			if(head1->data<head2->data){
				nex->next=head1;
				nex=nex->next;
				head1=head1->next;
			}
			else {
				nex->next=head2;
				nex=nex->next;
				head2=head2->next;
			}
	}
	if(head2!=NULL){
		nex->next=head2;
	}
	if(head1!=NULL){
		nex->next=head1;
	}
	return prev;
}
/**********************************************/
Node *mergeSort(Node *head)
{
	//Write your code here
	if(head==NULL||head->next==NULL){
		return head;
	}
	Node * mid=midPoint(head);
	Node *a=head;
	Node *b=(mid->next);
	mid->next=NULL;
		a=mergeSort(a);
		b=mergeSort(b);
	Node *final=mergeTwoSortedLinkedLists(a,b);
	return final;
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		head = mergeSort(head);
		print(head);
	}

	return 0;
}