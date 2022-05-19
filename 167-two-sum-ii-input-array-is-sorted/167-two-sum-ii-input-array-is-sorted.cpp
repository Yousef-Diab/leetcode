class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<numbers.size();i++)mp[numbers[i]]=i+1;
        for(int i=0;i<numbers.size();i++){
            if(mp[target-numbers[i]])return{i+1,mp[target-numbers[i]]};
        }
        return {};
    }
};