class Solution {
public:
    bool check(string s1,string s2){
        int k=0,f=0;
        for(;k<s1.size();k++){
            for(;f<s2.size();f++){
                if(s1[k]==s2[f])return false;
                else if(s2[f]>s1[k])break;
            }
        }
        return true;
    }
    int maxProduct(vector<string>& words) {
        for(string&s:words)sort(s.begin(),s.end());
        int res=0;
        for(int i=0;i<words.size()-1;i++){
            for(int j=i+1;j<words.size();j++){
                if(check(words[i],words[j])){
                    int temp =(words[i].size()*words[j].size());
                    res=max(res,temp);
                }
            }
        }
        return res;
    }
};