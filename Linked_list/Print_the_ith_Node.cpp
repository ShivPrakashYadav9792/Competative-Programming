#include <iostream>
using namespace std;
//#include "solution.h"

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
//print the ith function
void printIthNode(Node *head, int i)
{
    //Write your code here

	Node *temp=head;
	int cnt=0;
	while(temp!=NULL){
		temp=temp->next;
		cnt++;
		if(cnt==i)
		cout<<temp->data;
	} 
	
}
//*******************************take input**********************/
Node *takeinput()
{
	int data;
    cout<<"enter the data"<<endl;
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

int main()
{
	int t;
    cout<<"enter the number of testcase"<<endl;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int pos;
        cout<<"enter the ith position"<<endl;
		cin >> pos;
		printIthNode(head, pos);
		cout << endl;
	}
	return 0;
}