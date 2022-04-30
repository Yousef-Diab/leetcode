class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res(numRows);
        res[0].push_back(1);
        if(numRows==1)return res;
        res[1].push_back(1);
        res[1].push_back(1);
        if(numRows==2)return res;
        for(int i=2;i<numRows;i++){
            res[i].push_back(1);
            int k=0;
            for(int j=0;j<=i-2;j++){
                res[i].push_back(res[i-1][k]+res[i-1][k+1]);
                k++;
            }
            res[i].push_back(1);
        }
        return res;
    }
};