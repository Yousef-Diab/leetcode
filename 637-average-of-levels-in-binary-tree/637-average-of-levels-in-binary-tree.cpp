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
    vector<double>vals;
    vector<int>cnts;
    void inOrder(TreeNode* Node,int lvl){
        if(!Node)return;
        if(lvl<vals.size()){
            vals[lvl]+=Node->val;
            cnts[lvl]++;
        }
        else {
            vals.push_back(Node->val);
            cnts.push_back(1);
        }
        inOrder(Node->left,lvl+1);
        inOrder(Node->right,lvl+1);
    }
    vector<double> averageOfLevels(TreeNode* root) {
       inOrder(root,0);
        vector<double>res(vals.size());
        for(int i=0;i<vals.size();++i){
            res[i]=vals[i]/cnts[i];
        }
        return res;
    }
};