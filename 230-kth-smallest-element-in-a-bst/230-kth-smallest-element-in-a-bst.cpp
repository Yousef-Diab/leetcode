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
    TreeNode*curr;
    TreeNode inOrder(TreeNode* root){
        if(!root)return NULL;
        inOrder(root->left);
        root->left=NULL;
        curr->right=root;
        curr=root;
        inOrder(root->right);
        return NULL;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        TreeNode*dummy=new TreeNode(0);
        curr=dummy;
        inOrder(root);
        TreeNode*temp=dummy;
        while(k--){
            temp=temp->right;
        }
        return temp->val;
    }
};