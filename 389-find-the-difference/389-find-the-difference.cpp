class Solution {
public:
    char findTheDifference(string s, string t) {
        int res=0;
        for(int i=0;i<s.length();++i){
            res+=(t[i]-s[i]);
        }
        res+=t[t.length()-1];
        return res;
    }
};