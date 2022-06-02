class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> res(matrix[0].size(),vector<int>(matrix.size(),0));
        int i=0,j=0;
        for(int k=0;k<matrix.size();++k){
            for(int p=0;p<matrix[0].size();++p){
                res[p][k]=matrix[i][j];
                j=(j+1)%matrix[0].size();
                if(j==0)i++;
            }
        }
        return res;
    }
};