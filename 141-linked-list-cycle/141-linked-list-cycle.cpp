/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*prev=head;
        ListNode*curr=prev;
        while(curr!=NULL){
        if(curr->next==NULL)return false;
        if(curr->next==head)return true;
        prev=curr;
        curr=curr->next;
        prev->next=head;
    }
        return false;}
};