/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
      if(head->next==NULL)
          return;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=slow->next;
        while(curr!=NULL){
            ListNode* nextt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextt;
        }
        slow->next=NULL;
        ListNode* head1=head;
        ListNode* head2=prev;
        while(head2){
            ListNode* temp=head1->next;
            head1->next=head2;
            head1=head1->next;
            head2=temp;
        }
    }
};