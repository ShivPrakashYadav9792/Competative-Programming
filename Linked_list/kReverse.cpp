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
Node *kReverse(Node *head, int k) {
        if(head == NULL || head->next == NULL||k==0||k==1)
		return head;
        Node *prev = NULL;
	Node *curr = head;
	Node *next = NULL;
	int count=0;
	while(count<k&&curr!=NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr =next;
		count++;
	}
	if(next!=NULL)
	head->next=kReverse(next,k);
	return prev;
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
		int k;
		cin >> k;
		head = kReverse(head, k);
		print(head);
	}
	
	return 0;
}