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
Node *evenAfterOdd(Node *head)
{
	//write your code here
	Node *evenh=NULL;
	Node *eventa=NULL;
	Node *oddh=NULL;
	Node *oddt=NULL;
    /***************************************/
	if(head==NULL||head->next==NULL)
		return head;
	
	while(head!=NULL){
		if((head->data)%2!=0){
			if(oddh==NULL){
					oddh=head;
					oddt=head;
					 head=head->next;
                        } else {
                          oddt->next = head;
						  oddt=oddt->next ;
						  head=head->next;
                        }
                }
				else {
                        if(evenh==NULL){
					evenh=head;
					eventa=head;
					 head=head->next;
                        } else {
                          eventa->next = head;
						  eventa= eventa->next;
                          head = head->next;
                        }
                }
        }
		if(oddh==NULL){

		eventa->next=NULL;
		return evenh;
		}
		oddt->next=evenh;
		return oddh;
}
/*///////////////////////////////////////////////////////*/
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
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}