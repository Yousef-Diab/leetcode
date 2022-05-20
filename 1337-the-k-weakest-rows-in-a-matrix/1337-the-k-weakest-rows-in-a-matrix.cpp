class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>>q;
        for(int i=0;i<mat.size();i++){
            int sum=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0)break;
                sum++;
            }
            q.push({sum,i});
        }
        while(q.size()>k)q.pop();
        vector<int>res(k);
        while(k-1>=0){
            res[--k]=q.top().second;
            q.pop();
        }
        return res;
    }
};