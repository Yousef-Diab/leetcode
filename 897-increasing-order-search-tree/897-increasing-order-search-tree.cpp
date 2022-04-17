class Solution {
public:
    TreeNode* curr;
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy=new TreeNode(0);
        curr=dummy;
        inOrder(root);
        return dummy->right;
    }
    TreeNode* inOrder(TreeNode* root){
        if(!root)return NULL;
        inOrder(root->left);
        root->left=NULL;
        curr->right=root;
        curr=curr->right;
        inOrder(root->right);
        return NULL;
    }
};