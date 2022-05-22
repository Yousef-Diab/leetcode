class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            extend(i,i,s,count);
            extend(i,i+1,s,count);
        }
        return count;
    }
    void extend(int l,int r,string &s,int&count){
        while(l>=0&&r<s.length()&&s[l]==s[r]){
            count++;
            l--;r++;
        }
    }
};