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
    vector<int> preorderTraversal(TreeNode* root) {
    vector<int> v;
    if(!root) return v;
    TreeNode* temp = root, *prev;
    while(temp){
        if(!temp->left){
            v.push_back(temp->val);
            temp = temp->right;
        }else{
            prev = temp->left;
            while(prev->right&&(prev->right != temp))
                prev = prev->right;
            if(!prev->right){
                v.push_back(temp->val);
                prev->right = temp;
                temp = temp->left;
            }else{
                prev->right = NULL;
                temp = temp->right;
            }
        }
    }
        return v;
}
};