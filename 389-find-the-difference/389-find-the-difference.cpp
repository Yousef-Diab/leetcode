class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        for(char c:s)mp[c]++;
        for(char c:t)
        {if(--mp[c]<0)return c;
        }
        return 'f';
    }
};