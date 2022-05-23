class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1, mid;
    while (nums[start] > nums[end]) {
        mid = (start + end) / 2;
        if (nums[mid] > nums[start])
            start = mid+1;
        else {
            ++start;
            end = mid;
        }
    }
    return nums[start];
    }
};