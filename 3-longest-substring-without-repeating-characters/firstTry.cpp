class Solution {
public:
    bool isD(string &s,int lim,int &j) {
    char dup = s[j];
    if (lim == 0)return false;
    for (int i = j - 1; ; i--) {
        if (s[i] == dup)return true;
        if (--lim)continue; else break;
    }
    return false;  
}
    int lengthOfLongestSubstring(string s) {
        int cnt(0), temp(0);
    for (int i = 0; i < s.length(); i++) {
        if (isD(s, temp, i)) {
            cnt = max(temp, cnt);
            i-=temp;
            temp = 0;
        }
        else temp++;
    }
    cnt = max(cnt, temp);
    return cnt;
    }
};
