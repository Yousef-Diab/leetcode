class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> m;int cnt=0;
        for(int n:nums){
            if(m[k-n]){m[k-n]--;cnt++;}
            else m[n]++;
        }
        return cnt;
        
    }
};