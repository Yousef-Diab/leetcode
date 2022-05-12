class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size())return 0;
        sort(nums.begin(), nums.end());
    int cnt = 1;
    int res = 0;
    for (int i = 0; i < nums.size()-1; i++) {
        if (nums[i] + 1 == nums[i + 1]) { cnt++; if (i + 1 == nums.size())cnt++; }
        else if(nums[i]==nums[i+1])continue;
        else {
            res = max(res, cnt);
            cnt = 1;
        }
    }
    res = max(res, cnt);
    return res;
    }
};