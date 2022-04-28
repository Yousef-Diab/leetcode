class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	for (int i = 0; i < nums2.size(); i++) {
            nums1[m] = nums2[i];
            m++;
    }
    sort(nums1.begin(), nums1.end());
    }
};