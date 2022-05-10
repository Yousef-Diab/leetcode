/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    // void preOrder(TreeNode*root,int p,int q){
    //     if(!root)return;
    //     if(root->val==p||root->val==q)return;
    //     if(root->val>p&&root->val<q)res->val=root->val;
    //     preOrder(root->left,p,q);
    //     preOrder(root->right,p,q);
    // }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode*res=root;
        while(res->val>p->val&&res->val>q->val||res->val<p->val&&res->val<q->val){
        while(res->val>p->val&&res->val>q->val)res=res->left;
        while(res->val<p->val&&res->val<q->val)res=res->right;
        }
        return res;
    }
};