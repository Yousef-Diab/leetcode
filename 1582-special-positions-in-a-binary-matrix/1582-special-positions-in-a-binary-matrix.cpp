class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        unordered_map<int,int>row;
        unordered_map<int,int>col;
        int res=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]){
                    if(row[i]<2&&col[j]<2)res++;
                }
            }
        }
        return res;
    }
};