class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,bool>mp;
        for(int n:arr){
            if(mp.find(2*n)!=mp.end()||n%2==0&&mp.find(n/2)!=mp.end())return true;
            mp[n]=true;
        }
        return false;
    }
};