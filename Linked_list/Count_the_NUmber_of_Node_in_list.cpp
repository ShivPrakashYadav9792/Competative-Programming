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

//For Length of list
int length(Node *head)
{
	Node*temp=head;
	int cnt=0;
	while(temp!=NULL){
	temp=temp->next;
	cnt++;
	}
	return cnt;

}
/**********************************Take input in the list********************************/
Node *takeinput()
{
	int data;
    cout<<"enter the data"<<endl;
	cin >>data;
	Node *head=NULL,*tail=NULL;
	while (data!=-1){
		Node *newNode=new Node(data);
		if (head== NULL){
			head=newNode;
			tail=newNode;
		}
		else{
			tail->next=newNode;
			tail=newNode;
		}
		cin>>data;
	}
	return head;
}

int main()
{
	int t;
        cout<<"enter the data"<<endl;
	cin>>t;
	while(t--)
	{
		Node *head=takeinput();
		cout<<length(head)<<endl;
	}
	return 0;
}