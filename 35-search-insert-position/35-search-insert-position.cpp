class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size() - 1;
        if(target<nums[l])return 0;
        if(target>nums[h])return h+1;
	while (l <= h) {
		int m = (h + l)/2;
		if (nums[m] == target) return m;
		else if (nums[m] > target) h = m - 1;
		else if (nums[m] < target) l = m + 1;
	}
	return l;
    }
};