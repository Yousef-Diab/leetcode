class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>res(rowIndex+1);
        res[0].push_back(1);
        if(rowIndex==0)return res[rowIndex];
        res[1].push_back(1);
        res[1].push_back(1);
        if(rowIndex==1)return res[rowIndex];
        for(int i=2;i<=rowIndex;i++){
            res[i].push_back(1);
            int k=0;
            for(int j=0;j<=i-2;j++){
                res[i].push_back(res[i-1][k]+res[i-1][k+1]);
                k++;
            }
            res[i].push_back(1);
        }
        return res[rowIndex];
    }
};