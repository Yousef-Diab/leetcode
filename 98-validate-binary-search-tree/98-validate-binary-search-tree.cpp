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
    long temp=-2147483649;
    bool ok=true;
    void inOrder(TreeNode*root){
        if(!root)return;
        inOrder(root->left);
        if(root->val<=temp)ok=false;
        temp=root->val;
        inOrder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(!root->right&&!root->left)return true;
        inOrder(root);
        return ok;
    }
};