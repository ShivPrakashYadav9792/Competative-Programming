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
Node *appendLastNToFirst(Node *head, int n) {
  // Write your code here
        if(head==NULL||n==0)
		return head;
	int i=0;
        Node *temp=head;
	while(temp->next!=NULL){
			temp=temp->next;
			i++;
	}
	int k=i-n;
	Node *tail=head;
	Node *a;
	 i=0;
	while(i<k){
		tail=tail->next;
		i++;
	}
	a=tail->next;
	tail->next=NULL;
	temp->next=head;
	head=a;
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
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}