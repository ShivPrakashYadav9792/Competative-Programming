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
Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
	if(head==NULL||i==j)
	return head;
	Node *temp=head;
	Node *temp2=head;
	Node * t;
	Node *k;
	int cnt1=0,cnt2=0;
	while(cnt1<i&&temp!=NULL){
		temp=temp->next;
		cnt1++;
	}
	t=temp;
	while(cnt2<j&&temp2!=NULL){
		temp2=temp2->next;
		cnt2++;
	}
k=temp2;
int l=t->data;
t->data=k->data;
k->data=l;	
return head;
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
		int i, j;
		Node *head = takeinput();
		cin >> i;
		cin >> j;
		head = swapNodes(head, i, j);
		print(head);
	}
	return 0;
}