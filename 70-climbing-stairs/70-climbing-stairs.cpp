class Solution {
public:
    int climbStairs(int n) {
    
    if(n<=3)return n;
    int ans[n+1];
    ans[1]=1;
    ans[2]=2;
    ans[3]=3;
    int num(0);
    for(int i=4;i<=n;i++){
        ans[i]=ans[i-2]+ans[i-1];
    }
    return ans[n];
    }
};