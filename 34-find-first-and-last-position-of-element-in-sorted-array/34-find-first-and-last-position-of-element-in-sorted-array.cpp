class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res(2,-1);
        int l=0,r=nums.size()-1;
        if(!nums.size())return res;
        if(nums.size()==1){
            if(nums[0]==target)return {0,0};
            else return res;
        }
        while(l<=r){
            int m=l+(r-l)/2;
            if(nums[m]==target){
                while(m>0&&nums[m-1]==target)m--;
                res[0]=m;
                while(m<nums.size()-1&&nums[m+1]==target)m++;
                res[1]=m;
                return res;
            }
            else if(nums[m]>target)r=m-1;
            else l=m+1;
        }
        return res;
    }
};