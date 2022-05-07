class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>mps;
        unordered_map<char,int>mpt;
        string ss="";
        string tt="";
        for(int i=0;i<s.length();i++){
            if(mps[s[i]]!=0)
                ss+=to_string(mps[s[i]]);
            else{mps[s[i]]=i+1;ss+=to_string(i+1);}
            if(mpt[t[i]]!=0)
                tt+=to_string(mpt[t[i]]);
            else{mpt[t[i]]=i+1;tt+=to_string(i+1);}
        }
        return ss==tt;
    }
};