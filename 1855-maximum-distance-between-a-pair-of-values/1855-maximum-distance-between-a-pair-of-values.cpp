class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int res=0;
        for(int i=0;i<nums1.size();i++){
            int l=i,r=nums2.size()-1;
            if(i>=nums2.size())break;
            while(l<=r){
                int m=l+(r-l)/2;
                if(nums2[m]>=nums1[i]){
                    res=max(res,m-i);
                    l=m+1;
                }
                else r=m-1;
            }
        }
        return res;
    }
};