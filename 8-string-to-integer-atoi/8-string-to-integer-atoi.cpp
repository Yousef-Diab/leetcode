class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int ans = 0;
        int sign = 1;  
        for(; i< s.length() && s[i]==' '; ) i++; 
        
        if(s[i]=='-' || s[i]=='+'){
            if(s[i]=='-' )
                sign = -1;
            i++;
        }
        for(; i< s.length() && s[i]>='0' && s[i] <='9';){
            int no = s[i] - '0';
            if(((ans) > (INT_MAX/10)) || (ans *10 > INT_MAX -no)){
                return sign ==1 ? INT_MAX : INT_MIN;
            }        
            ans = ans*10 + no;
            i++;
        }
        return ans * sign;
    }
};