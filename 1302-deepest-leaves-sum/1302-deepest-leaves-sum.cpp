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
    int deepestLeavesSum(TreeNode* root) {
        if(!root->right&&!root->left)return root->val;
        int sum=0;
        queue<pair<TreeNode*,int>>q;
        root->val=0;
        q.push(make_pair(root,0));
        do{
            TreeNode*temp=q.front().first;
            sum+=temp->val;
            if(temp->left)q.push(make_pair(temp->left,q.front().second+1));
            if(temp->right)q.push(make_pair(temp->right,q.front().second+1));
            if(q.back().second>q.front().second)sum=0;
            q.pop();
        }while(!q.empty());
        return sum;
    }
};