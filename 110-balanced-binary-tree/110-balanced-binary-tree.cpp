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
    bool check=false;
    int height(TreeNode*root){
        if(!root)return -1;
        return 1+max(height(root->right),height(root->left));
    }
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        return abs(height(root->left)-height(root->right))<=1&&isBalanced(root->left)&&isBalanced(root->right);
    }
};