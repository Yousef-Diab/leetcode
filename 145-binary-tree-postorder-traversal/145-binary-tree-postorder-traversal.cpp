class Solution {
public:
    vector<int> ans;
    void postOrder(TreeNode*root){
        if(!root)return;
        postOrder(root->left);
        root->left=NULL;
        postOrder(root->right);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postOrder(root);
        return ans;
    }
};