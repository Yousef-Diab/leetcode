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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string s(""),c("");
        ListNode*curr1=l1,*curr2=l2;
        while(curr1!=nullptr){
            s+=(curr1->val+'0');
            curr1=curr1->next;
        }
        while(curr2!=nullptr){
            c+=(curr2->val+'0');
            curr2=curr2->next;
        }
        reverse(s.begin(),s.end());
        reverse(c.begin(),c.end());
        string high = s.length() >= c.length() ? s :c;
        string low = s.length() < c.length() ? s : c;
    int hand(0);
    while (high.length()!=low.length()) {
        low.insert(0, "0");
    }
        ListNode*first=l1;
        ListNode*curr;
        curr=first;
        l1->next=curr;
    for (int i = high.length()-1; i >=0; i--){
        int e = ((high[i] ? high[i] - '0' : 0) + (low[i] ? low[i] - '0' : 0))+hand;
        hand = e / 10;
        e %= 10;
        ListNode *newNode=new ListNode;
        newNode->val=e;
        curr->next=newNode;
        curr=newNode;
    }
        if(hand==1){
        ListNode *newNode=new ListNode;
        newNode->val=hand;
        curr->next=newNode;
        curr=newNode;
        }
        first=first->next;
        return first;
        
    }
};