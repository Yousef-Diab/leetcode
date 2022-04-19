/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool check=true;
    bool inOrder(TreeNode*p,TreeNode*q,bool &check){
        if(p==NULL&&q==NULL)return true;
        else if(p==NULL)return false;
        else if(q==NULL)return false;
        if(p->val!=q->val)return false;
        if(!inOrder(p->left,q->left,check))return false;
        if(!inOrder(p->right,q->right,check))return false;
        return true;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return inOrder(p,q,check);
    }
};