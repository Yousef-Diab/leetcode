class Solution {
public:
    int reverse(int x) {
        string s=to_string(x);
        long long n=0;
        int l=s[0]=='-'?1:0;
        for(int i=s.length()-1;i>=l;--i){
            n=(n*10)+(s[i]-'0');
        }
        if(n>INT_MAX||n<INT_MIN)return 0;
        if(x>=0)return n;
        return -n;
    }
};