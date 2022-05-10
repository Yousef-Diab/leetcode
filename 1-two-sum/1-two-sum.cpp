class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]){if(nums[i]*2==target&&mp[nums[i]]-1!=i)return {mp[nums[i]]-1,i};}
            mp[nums[i]]=i+1;
            if(mp[target-nums[i]]&&mp[target-nums[i]]-1!=i)return {i,mp[target-nums[i]]-1};
        }
        return {};
    }
};