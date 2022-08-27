class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=1;i<nums.size();++i)nums[i]+=nums[i-1];
        for(int i=0;i<nums.size();++i){
            int right=0;
            int left=0;
            if(i!=0)left=nums[i-1];
            if(i!=nums.size()-1)right=nums[nums.size()-1]-nums[i];
            if(right==left)return i;
        }
        return -1;
    }
};