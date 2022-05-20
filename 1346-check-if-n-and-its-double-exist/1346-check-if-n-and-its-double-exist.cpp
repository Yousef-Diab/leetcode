class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,bool>mp;
        int zs=0;
        for(int n:arr){mp[n]=true;if(n==0)zs++;}
        if(zs>=2)return true;
        for(int n:arr)if(mp[2*n]==true&&n!=0)return true;
        return false;
    }
};