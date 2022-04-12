class Solution {
public:
    string addBinary(string a, string b) {
    string _max;
	string _min;
    if (a.size() >= b.size()) {
		_max = a;
		_min = b;
	}
	else {
		_max = b;
		_min = a;
	}
    while(_max.size()!=_min.size())_min.insert(_min.begin(), '0');
	string ans;
	int take(0);
	int j = _min.length();
	for (int i = _max.length()- 1 ; i >=0; i--) {
		j--;
		if (_max[i] == '0' && _min[j] == '0') {
			if(take==0)
				ans.insert(ans.begin(), '0');
			else {
				ans.insert(ans.begin(), '1');
				take = 0;
			}
		}
		else if (_max[i] == '0' && _min[j] == '1' || _max[i] == '1' && _min[j] == '0') {
			if(take==0)
				ans.insert(ans.begin(), '1');
			else {
				ans.insert(ans.begin(), '0');
			}
		}
		else if (_max[i] == '1' && _min[j] == '1') {
			if (take == 0) {
				ans.insert(ans.begin(), '0');
				take = 1;
			}
			else {
				ans.insert(ans.begin(), '1');
			}
		}
	}
	if (take == 1) ans.insert(ans.begin(), '1');
	return ans;
    }
};