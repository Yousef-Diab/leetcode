class Solution {
public:
    vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if(matrix.size()==0)return 0;
        vector<vector<int>>dp(200,vector<int>(200,0));
        int m=matrix.size();
        int n=matrix[0].size();
        int maxPath=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                maxPath=max(maxPath,dfs(matrix,m,n,i,j,dp));
            }
        }
        return maxPath;
    }
    int dfs(vector<vector<int>>&matrix,int m,int n,int i,int j,vector<vector<int>>&dp){
        if(dp[i][j])return dp[i][j]+1;
        int mx=0;
        for(auto d:dir){
            int x=i+d[0],y=j+d[1];
            if(x>=0&&y>=0&&x<m&&y<n&&matrix[x][y]>matrix[i][j]){
                mx=max(mx,dfs(matrix,m,n,x,y,dp));
            }
        }
        dp[i][j]=mx;
        return mx+1;
    }
};