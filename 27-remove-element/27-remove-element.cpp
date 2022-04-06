class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k(0),swapcnt(nums.size()-1);
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] != val) {
			k++;
			continue;
		}
		while (swapcnt>i&&nums[i] == nums[swapcnt])
			swapcnt--;
		if (swapcnt <= i)
			break;
		if(nums[i] == val){
			int temp = nums[i];
			nums[i] = nums[swapcnt];
			nums[swapcnt] = temp;
			i--;
		}
	}
	return k;
    }
};