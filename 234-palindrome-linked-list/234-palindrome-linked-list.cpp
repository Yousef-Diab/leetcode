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
    bool isPalindrome(ListNode* head) {
        ListNode*turtle=head;
        ListNode*rabbit=head;
        ListNode*prev=new ListNode(NULL);
        ListNode*temp=new ListNode(NULL);
        if(head->next==NULL)return true;
        while(rabbit&&rabbit->next)
            rabbit=rabbit->next->next,turtle=turtle->next;
        prev=turtle;
        turtle=turtle->next;
        prev->next=NULL;
        while(turtle){
        temp=turtle->next;
        turtle->next=prev;
        prev=turtle;
        turtle=temp;
        }
        rabbit=head;
        turtle=prev;
        while(turtle!=NULL){
            if(rabbit->val!=turtle->val)return false;
            else{rabbit=rabbit->next;
            turtle=turtle->next;}
        }
        return true;
    }
};