class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int local=0;
        int m=INT_MIN;
        for(int i=0;i<nums.size();i++){
            local=max(nums[i],nums[i]+local);
            if(local>m)m=local;
        }
        return m;
    }
};