class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>newNums;
        unordered_map<int,int>mp;
        for(int n:nums)
        {
            if(++mp[n]<=3){
                newNums.push_back(n);
            }
        }
                sort(newNums.begin(),newNums.end());

        for(int i=0;i<newNums.size();++i){
            for(int j=i+1;j<newNums.size();++j){
                mp[newNums[i]]--;
                mp[newNums[j]]--;
                if(mp[0-(newNums[i]+newNums[j])]){
                    vector<int>v{newNums[i],newNums[j],0-(newNums[i]+newNums[j])};
                    sort(v.begin(),v.end());
                    res.push_back(v);
                }
                mp[newNums[i]]++;
                mp[newNums[j]]++;
            }
        }
        sort( res.begin(), res.end() );
        res.erase(std::unique(res.begin(), res.end()), res.end());
        return res;
    }
};