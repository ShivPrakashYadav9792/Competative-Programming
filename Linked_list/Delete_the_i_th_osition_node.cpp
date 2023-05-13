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
Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
	if(head==NULL)
	return head;
	if(pos==0)
	return head->next;
	int cnt=0;
	Node *prev=head;
	while(prev!=NULL&&cnt<pos-1){
			cnt++;
			prev=prev->next;
	}
	if(prev==NULL||prev->next==NULL)
	return head;
	prev->next=prev->next->next;
	return head;
	
}

Node *takeinput()
{

	int data;
    cout<<"Enter the Data"<<endl;
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
        cout<<"Enter the Data"<<endl;
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
    cout<<"Enter the number of test case"<<endl;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int pos;
        cout<<"Enter the position"<<endl;
		cin >> pos;
		head = deleteNode(head, pos);
        cout<<"output"<<endl;
		print(head);
	}

	return 0;
}