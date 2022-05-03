class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9')str+=s[i];
            else if(s[i]>='A'&&s[i]<='Z')str+=(s[i]+32);
        }
        if(str.empty())return true;
        int n=str.length();
        int i=0,j=n-1;
        while(i<=j){
            if(str[i]!=str[j])return false;
            i++;j--;
        }
        return true;
    }
};