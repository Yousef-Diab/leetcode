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
    if(!head)return false;
    auto walk=head,run=head;
    while(run&&run->next){
        walk=walk->next;
        run=run->next->next;
        if(walk==run)return true;
    }
        return false;
    }
};