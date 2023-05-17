#include <iostream>

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

using namespace std;
/*****************************/
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
        if (head1->data <= head2->data) {
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
			if(head1->data<=head2->data){
				nex->next=head1;
				nex=nex->next;
				head1=head1->next;
			}
			else if(head2->data<=head1->data){
				nex->next=head2;
				nex=nex->next;
				head2=head2->next;
			}
	}
	while(head1==NULL&&head2!=NULL){
		nex->next=head2;
		nex=nex->next;
		head2=head2->next;
	}
	while(head2==NULL&&head1!=NULL){
		nex->next=head1;
		nex=nex->next;
				head1=head1->next;
	}
	return prev;
}
/*******************************/
Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
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
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}