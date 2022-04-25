class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans[0]=0;
        for(int i=1;i<=n;i++){
            int j=i;
            int cnt=0;
            while(j!=0){if(j%2)cnt++;j/=2;}
            ans[i]=cnt;
        }
        return ans;
    }
};