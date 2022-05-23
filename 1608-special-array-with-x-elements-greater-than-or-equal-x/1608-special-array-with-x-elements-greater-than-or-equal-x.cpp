class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,r=n-1;
        if(nums[0]>=n)return n;
        while(l<=r){
            int m=l+(r-l)/2;
            if((n-m)<=nums[m]&&nums[m-1]<(n-m))return (n-m);
            else if((n-m)<=nums[m])r=m-1;
            else l=m+1;
        }
        return -1;
    }
};