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
    void deleteNode(ListNode* node) {
        ListNode*curr=node;
        while(true){
            curr->val=curr->next->val;
            if(!curr->next->next)break;
            curr=curr->next;
        }
        curr->next=NULL;
    }
};