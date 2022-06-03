class NumMatrix {
public:
    vector<vector<int>>res;
    NumMatrix(vector<vector<int>>& matrix) {
        res=matrix;
        for(int i=0;i<res.size();++i){
            for(int j=1;j<res[0].size();++j){
                res[i][j]+=res[i][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        for(int i=row1;i<row2+1;++i){
            sum+=(res[i][col2]-(col1==0?0:res[i][col1-1]));
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */