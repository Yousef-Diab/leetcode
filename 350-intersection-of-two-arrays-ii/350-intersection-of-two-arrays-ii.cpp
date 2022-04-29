class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size())intersect(nums2,nums1);
        vector<int> res;
        unordered_map<int,int>mp;
        for(int i=0;i<nums2.size();i++)
            mp[nums2[i]]++;
        for(int i=0;i<nums1.size();i++){
            if(mp[nums1[i]]!=0){res.push_back(nums1[i]);mp[nums1[i]]--;}
        }
        return res;
    }
};