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
    ListNode* middleNode(ListNode* head) {
        int cnt=1;
        ListNode*curr=head;
        while(curr->next){
            cnt++;
            curr=curr->next;
        }
        cnt/=2;
        cnt++;
        int res=1;
        curr=head;
        while(res!=cnt){
            res++;
            curr=curr->next;
        }
        return curr;
    }
};