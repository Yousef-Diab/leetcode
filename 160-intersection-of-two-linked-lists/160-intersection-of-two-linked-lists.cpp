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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int cntA(0),cntB(0);
        ListNode*currA=headA;
        ListNode*currB=headB;
        while(currA!=NULL){
            currA=currA->next;
            cntA++;
        }
        while(currB!=NULL){
            currB=currB->next;
            cntB++;
        }
        int n=abs(cntA-cntB);
        currA=headA;
        currB=headB;
        if(cntA>cntB)
        while(n--)currA=currA->next;
        else if(cntB>cntA)while(n--)currB=currB->next;
        while(currA&&currB){
            if(currA==currB)return currA;
            currA=currA->next;
            currB=currB->next;
        }
        return NULL;
    }
};