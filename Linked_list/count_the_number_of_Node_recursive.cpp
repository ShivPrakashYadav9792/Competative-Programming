#include <iostream>
using namespace std;
class Node {
   public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


int length(Node *head) {
    // Write your code here
	int count=0;
    if(head==NULL)
	return count;
	return  1+length(head->next);

}
Node *takeinput() {
    int data;
    cout<<" enter the data  ="<<endl;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
            cout<<" enter the data  ="<<endl;
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}
int main() {
    int t;
        cout<<" enter the number of testcase  ="<<endl;
    cin >> t;
    while (t--) {
        Node *head = takeinput();
        cout<<"the output is"<<endl;
        cout << length(head) << "\n";
    }
}