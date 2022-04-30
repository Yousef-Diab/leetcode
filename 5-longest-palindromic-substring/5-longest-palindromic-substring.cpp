class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        if(n==0)return "";
        if(n==1||n==2&&s[0]==s[1])return s;
        if(n==2)return s.substr(0,1);
        string ans="";
        ans+=s[0];
        bool dp[n][n];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++)
            dp[i][i]=true;
        for(int i=n-2;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    if(j-i==1||dp[i+1][j-1]){
                        dp[i][j]=true;
                        if(ans.length()<j-i+1)ans=s.substr(i,j-i+1);
                    }
                }                
            }
        }
        return ans;
    }
};