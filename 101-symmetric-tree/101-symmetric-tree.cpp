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
    bool isEqual(TreeNode*p,TreeNode*q){
        if(p==NULL||q==NULL)return (p==q);
        return (p->val==q->val&&isEqual(p->left,q->right)&&isEqual(p->right,q->left));
    }
    bool isSymmetric(TreeNode* root) {
        TreeNode*p=root->left;
        TreeNode*q=root->right;
        return isEqual(p,q);
    }
};