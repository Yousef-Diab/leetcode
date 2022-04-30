class Solution {
public:
    string convert(string s, int numRows) {
        if(s.length()<3)return s;
        if(numRows==1)return s;
        vector<vector<char>>vec(numRows);
        int row=0;
        for(int i=0;i<s.length();){
            while(row<numRows-1){vec[row++].push_back(s[i]);if(++i>=s.length())break;}
            if(row==numRows-1){
                while(row!=0){
                    vec[row--].push_back(s[i]);
                    if(++i>=s.length())break;
                }
            }
            if(i>=s.length())break;
        }
        string res="";
        for(vector<char>d1:vec){
            for(char c:d1){
                if(c>='A'&&c<='Z'||c>='a'&&c<='z'||c==','||c=='.')
                res+=c;
            }
        }
        return res;
    }
};