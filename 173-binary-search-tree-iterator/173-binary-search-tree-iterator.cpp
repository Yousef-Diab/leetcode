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
class BSTIterator {
public:
    TreeNode* dummy=new TreeNode(0);
    TreeNode*curr=dummy;
    TreeNode*ptr=dummy;

    void inOrder(TreeNode*root){
        if(!root)return;
        inOrder(root->left);
        root->left=NULL;
        curr->right=root;
        curr=root;
        inOrder(root->right);
    }
    BSTIterator(TreeNode* root) {
        inOrder(root);
    }
    
    int next() {
        ptr=ptr->right;
        return ptr->val;
    }
    
    bool hasNext() {
        return ptr->right!=NULL;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */