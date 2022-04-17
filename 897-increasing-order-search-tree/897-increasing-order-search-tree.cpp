class Solution {
public:
    TreeNode* increasingBST(TreeNode* root,TreeNode* next=NULL) {
        if(root==NULL) return next;
        else{
        TreeNode* answer= increasingBST(root->left,root);
        root->left=NULL;
        root->right=increasingBST(root->right,next);
        return answer;
        }
    }
};