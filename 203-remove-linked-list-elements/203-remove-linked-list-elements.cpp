class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)return head;
        while(head!=NULL&&head->val==val){head=head->next;}
        ListNode*curr=head;
        while(curr!=NULL&&curr->next!=NULL){
        if(curr->next->val==val){
            curr->next=curr->next->next;
        }
        else curr=curr->next;
        }
        return head;
    }
};