class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size()!=r*c)return mat;
        vector<vector<int>> res;
        int i=0,j=0;
         res.resize(r,vector<int>(c,0));
        for(vector<int> d1:mat){
            for(int x:d1){
                
                res[i][j]=x;
                j++; if (j == c) { j %= c; i++; i %= r; }
                }
            }
                return res;
        }
};