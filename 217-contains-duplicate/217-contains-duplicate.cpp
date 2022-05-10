class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool>mp;
        for(int i:nums){
            if(mp[i])return true;
            mp[i]=true;
        }
        return false;
    }
};