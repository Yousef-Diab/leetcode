class Solution {
public:
    int longestValidParentheses(string s) {
       stack<int>st;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='(')st.push(i);
            else {
                if(!st.empty()){
                    if(s[st.top()]=='(')st.pop();
                    else st.push(i);
                }
                else st.push(i);
            }
        }
        int res=0;
        if(st.empty())return n;
        else
        {   int one=n,two=0;
            while(!st.empty()){
                two=st.top();
                st.pop();
                res=max(res,one-two-1);
                one=two;
            }
        res=max(res,one);
        }
        return res;
    }
};