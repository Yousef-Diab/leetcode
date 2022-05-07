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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)return ans;
        queue<pair<TreeNode*,int>> Q;
        int level=0;
        Q.push(make_pair(root,level));
        vector<int>temp;
        while(!Q.empty()){
            TreeNode*curr=Q.front().first;
            if(Q.front().second>level){ans.push_back(temp);temp.clear();}
            temp.push_back(curr->val);
            if(curr->left!=NULL)
                Q.push(make_pair(curr->left,Q.front().second+1));
            if(curr->right!=NULL)
                Q.push(make_pair(curr->right,Q.front().second+1));
            level=Q.front().second;
            Q.pop(); 
            }
        if(!temp.empty())ans.push_back(temp);
        return ans; 
    }
};