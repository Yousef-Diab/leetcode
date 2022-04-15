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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        int frst(0);
        if(list1==nullptr)return list2;
        else if(list2==nullptr)return list1;
        else{
            ListNode*next1=list1->next;
        ListNode*curr1=list1;
        ListNode*prev1=curr1;
        ListNode*curr2=list2;
        while(curr2!=nullptr){
            if(curr1->val>=curr2->val){
                ListNode*newNode=new ListNode;
                newNode->val=curr2->val;
                if(curr1!=prev1)prev1->next=newNode;
                prev1=newNode;
                newNode->next=curr1;
                curr2=curr2->next;
                if(!frst)list1=prev1;
                frst++;
            }
            else{
                if(curr1->next!=NULL){
                next1=next1->next;
                     prev1=curr1;
                curr1=curr1->next;
                    frst++;
                    continue;}
                else{
                    while(curr2!=NULL){
                        ListNode*Node=new ListNode;
                        Node->val=curr2->val;
                        curr1->next=Node;
                        if(next1!=nullptr&&next1->next!=nullptr)
                        next1->next=Node;
                        Node->next=NULL;
                        curr2=curr2->next;
                        curr1=Node;
                    }
                    break;
            }
        }
        
    }
        }
        return list1;
    }
};