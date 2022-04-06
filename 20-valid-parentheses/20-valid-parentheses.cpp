class Solution {
public:
    bool isValid(string s) {
        for (int i = 0; i < s.length()-1; i++) {
		if (s[i] == '(' && s[i + 1] == ')'|| s[i] == '[' && s[i + 1] == ']'|| s[i] == '{' && s[i + 1] == '}') {
			s.erase(s.begin() + i, s.begin() + i + 2);
			i=-1;
		}
		if (s.length() == 0) {
			return true;
		}
	}
	return false;
};
};