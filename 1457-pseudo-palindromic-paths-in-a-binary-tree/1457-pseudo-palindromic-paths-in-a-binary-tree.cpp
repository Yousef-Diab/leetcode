class Solution {
    private:
        int res=0;
        unordered_map<int,int>mp;
    
public:
    void inOrder(TreeNode*Node,int odds){
        if(!Node)return;
        if(++mp[Node->val]%2==0)odds--;
        else odds++;
        if(Node->right==nullptr&&Node->left==nullptr)
            if(odds<=1)res++;
        inOrder(Node->left,odds);
        inOrder(Node->right,odds);
        --mp[Node->val];
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        inOrder(root,0);
        return res;
    }
};