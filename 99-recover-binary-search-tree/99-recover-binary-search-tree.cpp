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
    TreeNode*prev=new TreeNode(INT_MIN),*num1=NULL,*num2=NULL;
    void inOrder(TreeNode*root){
        if (!root)return;
      inOrder(root->left);
        if(num1==NULL&&root->val<prev->val)num1=prev;
        if(num1!=NULL&&root->val<prev->val)num2=root;
        prev=root;
      inOrder(root->right);
    }
    void recoverTree(TreeNode* root) {
        inOrder(root);
        swap(num1->val,num2->val);
    }
};