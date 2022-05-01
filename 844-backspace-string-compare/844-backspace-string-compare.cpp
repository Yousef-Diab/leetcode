class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int j=t.length()-1;
        int i=s.length()-1;
        int cnti(0),cntj(0);
        while(i>-1||j>-1){
            while(i>=0&&s[i]=='#'){
                cnti++;
                i--;
            }
            if(cnti&&i>=0){
                i--;cnti--;
                continue;
            }
            while(j>=0&&t[j]=='#'){
                cntj++;
                j--;
            }
            if(cntj&&j>=0){
                cntj--;
                j--;
                continue;
            }
            if(i>=0&&j>=0&&s[i]==t[j]){
                i--;j--;
                continue;
            }
            if(i>=0&&j>=0&&s[i]!=t[j])return false;
            if(i>=0&&j<0||i<0&&j>=0)return false;
        }
        return true;
    }
};