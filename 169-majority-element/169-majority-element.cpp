class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=(1);
        int target=nums.size()/2;
        if(nums.size()==1||nums.size()==2)return nums[0];
        for(int i=1;i<nums.size();i++){
            if(cnt>=target)return nums[i];
            if(nums[i]==nums[i-1])cnt++;
            else cnt=1;
        }
        return 0;
    }
};