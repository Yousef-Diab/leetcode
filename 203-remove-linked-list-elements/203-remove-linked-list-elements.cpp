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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*curr=head;
        ListNode*prev=new ListNode(0);
       while(curr!=NULL){
           if(val==head->val){
               prev=head;
               head=head->next;
               delete prev;
               ListNode*prev=new ListNode(0);
               curr=head;
               continue;
           }
           else if(val==curr->val&&curr->next!=NULL){
               prev->next=curr->next;
               curr=prev->next;
               continue;
           }
           else if(val==curr->val&&curr->next==NULL){
               prev->next=NULL;
               delete curr;
               break;
           }
           else{
               prev=curr;
               curr=curr->next;
           }
       }
        return head;
    }
};