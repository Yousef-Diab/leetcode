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
    ListNode* reverseList(ListNode* head) {
        if(!head||head->next==NULL)return head;
        ListNode*temp=head;
        ListNode*prev=head;
        ListNode*nxt=head->next;
        while(nxt){
            temp=nxt;
            nxt=nxt->next;
            temp->next=prev;
            prev=temp;
        }
        head->next=NULL;
        return temp;
    }
};