class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(int i=0;i<magazine.length();i++){
            mp[magazine[i]]++;
        }
        for(char c:ransomNote){
            if(mp[c]>0)mp[c]--;
            else return false;
        }
        return true;
    }
};