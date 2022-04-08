class Solution {
public:
    int strStr(string haystack, string needle) {
        bool yes = true;
	int ans(0);
	if (needle.empty() || needle == haystack)
		return 0;
	if (haystack.length() < needle.length())
		return -1;
	for (int i = 0; i <= haystack.size() - needle.size(); i++) {
		if (haystack[i] == needle[0]) {
			ans = i;
			int k = i + 1;
			for (int j = 1; j < needle.size(); j++) {
				yes = true;
				if (haystack[k] != needle[j]) {
					yes = false;
					break;
				}
				k++;
			}
			if (yes) {
				return ans;
			}
		}

	}
	return -1;
    }
};