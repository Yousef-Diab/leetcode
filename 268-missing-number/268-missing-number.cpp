class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>n(nums.size()+1,0);
        for(int c:nums){
            n[c]=1;
        }
        for(int i=0;i<=nums.size();++i){
            if(n[i]==0)return i;
        }
        return 0;
    }
};