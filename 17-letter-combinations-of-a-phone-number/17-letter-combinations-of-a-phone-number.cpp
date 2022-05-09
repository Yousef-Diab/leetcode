






class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>res;
    if (digits.empty())return res;
    unordered_map<char, string>mp = { {'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},
                                  {'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"} };
    for (int i = 0; i < mp[digits[0]].length(); i++) {
        if (digits.length() > 1)
            for (int j = 0; j < mp[digits[1]].length(); j++) {
                if (digits.length() > 2)
                    for (int k = 0; k < mp[digits[2]].length(); k++) {
                        if (digits.length() > 3)
                            for (int m = 0; m < mp[digits[3]].length(); m++) {
                                string temp = "";
                                temp.push_back(mp[digits[0]][i]); temp.push_back(mp[digits[1]][j]); temp.push_back(mp[digits[2]][k]);temp.push_back(mp[digits[3]][m]);
                                res.push_back(temp);
                            }
                        else {
                            string temp = ""; temp.push_back(mp[digits[0]][i]); temp.push_back(mp[digits[1]][j]); temp.push_back(mp[digits[2]][k]);
                            res.push_back(temp);
                        }
                    }
                else { string temp = ""; temp.push_back(mp[digits[0]][i]); temp.push_back(mp[digits[1]][j]); res.push_back(temp); }
            }
        else { string temp = ""; temp.push_back(mp[digits[0]][i]); res.push_back(temp); }
    }
    return res;
    }
};