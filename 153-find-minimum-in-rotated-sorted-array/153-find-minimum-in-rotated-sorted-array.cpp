class Solution {
public:
    int findMin(vector<int>& nums) {
        int res=5001;
        for(auto &a:nums)
            res=min(res,a);
        return res;
    }
};