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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode*curr=root;
        TreeNode*newNode=new TreeNode(val);
        if(!root){root=newNode;return root;}
        while(true){
            if(val<curr->val)
            {
                if(!curr->left){curr->left=newNode;return root;}
                else curr=curr->left;
                continue;
            }
            else {
                if(!curr->right){curr->right=newNode;return root;}
                else curr=curr->right;
            }
        }
        return root;
    }
};