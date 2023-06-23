class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
       if(head==NULL||head->next==NULL)
       {
            return head;
        }
        ListNode *temp= removeNodes(head->next);
        if(temp->val>head->val){
            return temp;
        }
        head->next=temp;
        return head;
    }
};