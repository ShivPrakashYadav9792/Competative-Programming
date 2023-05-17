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
Node *reverse(Node *temp){
	Node *prev=NULL;
	Node *nex;
	Node *cur =temp;
	while(cur!=NULL){
			nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
	}
	return prev;
}

bool isPalindrome(Node *head)
{
    //Write your code here
	if(head==NULL||head->next==NULL)
			return true;
	Node *slow =head;
	Node *fast=head->next;
	while(fast!=NULL&&fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;	
	}
	Node *rev=reverse(slow->next);
	while(rev!=NULL){
		if(head->data!=rev->data)
		return false;
		head=head->next;
		rev=rev->next;
	}
	return true;
}
Node *takeinput()
{
	int data;
    cout<<"enter the data"<<endl;
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
        cout<<"enter the data"<<endl;
		cin >> data;
	}
	return head;
}

int main()
{
	int t;
    cout<<"enter the number of testcase"<<endl;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}