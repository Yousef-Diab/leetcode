class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res=0,m=grid.size(),n=grid[0].size();
        int i,j;
        bool found=false;
        for(i=0;i<m;i++){
            found =false;
        for(j=n-1;j>=0;j--){
            if(grid[i][j]>=0){
                res+=n-1-j;
                found=true;
                break;
                }
            }
            if(!found)res+=n;
        }
        return res;
    }
};