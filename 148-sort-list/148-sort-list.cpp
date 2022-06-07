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
    ListNode* sortList(ListNode* head) {
        if(!head)return NULL;
        priority_queue<int>q;
        ListNode*curr=head;
        while(curr){
            q.push(curr->val);
            curr=curr->next;
        }
        ListNode*ez=new ListNode(q.top());
        ez->next=NULL;
        q.pop();
        while(!q.empty()){
            ListNode*temp=new ListNode(q.top());
            q.pop();
            temp->next=ez;
            ez=temp;
        }
        return ez;
    }
};