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
    TreeNode*curr;
    void inOrder(TreeNode*root,int &n){
        if(!root)return;
        inOrder(root->left,n);
        root->left=NULL;
        curr->right=root;
        curr=root;
        n++;
        inOrder(root->right,n);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode*dummy=new TreeNode(0);
        curr=dummy;
        int n(0);
        inOrder(root,n);
        vector<int> ans;
        ans.reserve(n);
        while(dummy->right){
            ans.push_back(dummy->right->val);
            dummy=dummy->right;
        }
        return ans;
    }
};