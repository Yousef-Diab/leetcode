class Solution {
public:
     
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l<=r){
            int m=(l+r)/2;
            if(nums[m]==target)return m;
            target<nums[m]?r=m-1:l=m+1;
        }
        return -1;
    }
};