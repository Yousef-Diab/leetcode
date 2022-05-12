class Solution {
public:
    vector<vector<int>>res;
    void solve(vector<int>nums,int i){
        if(i==nums.size()-1){
            res.push_back(nums);
            return;
        }
        else{
            for(int j=i;j<nums.size();j++){
                if(i!=j&&nums[i]==nums[j])continue;
                swap(nums[i],nums[j]);
                solve(nums,i+1);
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        solve(nums,0);
        return res;
    }
};