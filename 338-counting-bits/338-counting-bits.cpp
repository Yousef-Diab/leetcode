class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        if(n==0)return ans;
        ans[0]=0;ans[1]=1;
        for(int i=1;i<=n;i++)
            if(i%2)ans[i]=ans[i-1]+1;
            else ans[i]=ans[i/2];
        return ans;
    }
};