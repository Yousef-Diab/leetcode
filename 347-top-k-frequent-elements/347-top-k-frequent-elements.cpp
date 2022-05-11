class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>q;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)mp[nums[i]]++;
        
        for(auto it:mp)
            q.push(make_pair(it.second,it.first));
        vector<int> res;
        while(k--){
            pair<int,int>top=q.top();
            res.push_back(top.second);
            q.pop();
        }
        return res;
    }
};