class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l=0,r=0;
        unordered_map<int,int>mp;
        int sum=0;
        int res=0;
        while(r<nums.size()){
            sum+=nums[r];
            mp[nums[r]]++;
            while(mp[nums[r]]>1){
                mp[nums[l]]--;
                sum-=nums[l++];
            }
            res=max(res,sum);
            r++;
        }
        return res;
    }
};