class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int ans = pow(2, k);
        unordered_set<string>st;
        for (int i = k-1; i < s.length(); ++i) {
                string temp = "";
                st.insert(s.substr(i-k+1,k));
        }
    if (st.size() >= ans)return true;
    return false;
    }
};