class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
	set<int> s;
	for (int num : nums)s.insert(num);
	k = s.size();
	int i= 0;
	for (int num : s) {
		nums[i] = num;
		i++;
	}
       
        return k;
    }
};