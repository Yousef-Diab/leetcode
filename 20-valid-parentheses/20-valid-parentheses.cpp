class Solution {
public:
    bool isValid(string s) {
        stack<int>stak;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')stak.push(s[i]);
            else if(!stak.empty()){
            if(s[i]==')')
                if(stak.top()=='(')stak.pop();else return false;
            if(s[i]==']')
                if(stak.top()=='[')stak.pop();else return false;
            if(s[i]=='}')
                if(stak.top()=='{')stak.pop();else return false;
            }
            else return false;
        }
        return stak.empty();
    }
};