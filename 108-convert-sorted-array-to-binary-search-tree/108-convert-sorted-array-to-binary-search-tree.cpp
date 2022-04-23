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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)return NULL;
        if(nums.size()==1)return new TreeNode(nums[0]);
                int num=nums.size()/2;

        TreeNode*root=new TreeNode(nums[num]);

        
        vector<int>first(nums.begin(),nums.begin()+num);
        vector<int>last(nums.begin()+num+1,nums.end());
        
        root->left=sortedArrayToBST(first);
        root->right=sortedArrayToBST(last);
        return root;
    }
};