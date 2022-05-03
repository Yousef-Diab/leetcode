class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        if(nums.size()==1)return 0;
        vector<int>sorted(nums);
        sort(sorted.begin(),sorted.end());
        int start=-1,end=-2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=sorted[i]){
                if(start==-1)start=i;
                else end=i;
            }
        }
        return ++end-start;
        
    }
};