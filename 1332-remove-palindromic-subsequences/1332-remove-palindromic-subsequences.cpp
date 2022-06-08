class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.length()==0)return 0;
        if(s.length()==1||isPalindrom(s))return 1;
        return 2;
    }
    bool isPalindrom(string &s){
        int n=s.length();
        for(int i=0;i<n/2;++i){
            if(s[i]!=s[n-1-i])return false;
        }
        return true;
    }
};