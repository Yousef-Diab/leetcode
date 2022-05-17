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
    TreeNode*res=new TreeNode(0);
    void inOrder(TreeNode*root,TreeNode*target){
        if(!root)return;
            
        inOrder(root->left,target);
            if(root->val==target->val){
                res=root;
            }
        inOrder(root->right,target);
            
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        inOrder(cloned,target);
        return res;
    }
};