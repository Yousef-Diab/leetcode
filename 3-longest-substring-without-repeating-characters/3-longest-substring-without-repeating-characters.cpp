class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l(0), r(0), ans(0);
    int store[256] = { 0 };
    while (r < s.length()) {
        store[s[r]]++;
        while (store[s[r]] > 1) {
            store[s[l]]--;
            l++;
        }
        ans = max(ans, r - l + 1);
        r++;
    }
    return ans;
    }
};