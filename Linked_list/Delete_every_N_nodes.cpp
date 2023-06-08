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
/*************************************************/
Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code herei
	if(head==NULL)
	return head;
	if(M==0)
	return NULL;
	Node *temp=head;
	Node *temp2;
	while(temp){
		int cnt1=1,cnt2=1;
		while(cnt1<M&&temp!=NULL){
					temp=temp->next;
					cnt1++;
		}
		if(temp==NULL)
		return head;
		temp2=temp->next;
		while(cnt2<=N&&temp2!=NULL){
					temp2=temp2->next;
					cnt2++;
		}
		temp->next=temp2;
		temp=temp2;
	}
return head;
}
/****************************************************/
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
		int m, n;
		cin >> m >> n;
		head = skipMdeleteN(head, m, n);
		print(head);
	}
	return 0;
}