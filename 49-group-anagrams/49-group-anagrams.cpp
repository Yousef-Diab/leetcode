class Solution {
public:
    unordered_map<string,vector<string>>mp;
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(strs[i]);
        }
        vector<vector<string>>res;
        for(auto it=mp.begin();it!=mp.end();it++){
            res.push_back(it->second);
        }
        return res;
    }
};