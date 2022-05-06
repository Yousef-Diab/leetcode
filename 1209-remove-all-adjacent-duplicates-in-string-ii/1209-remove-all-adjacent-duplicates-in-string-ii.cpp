class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        if(s.length()<k)return s;
        
        for(char c:s){
            if(st.empty()||st.top().first!=c){
                st.push(make_pair(c,1));
            }
            else if(st.top().first==c) {
                int temp=st.top().second;
                if (temp==k-1){
                    while(temp--)st.pop();
                }
                else {
                    st.push(make_pair(c,temp+1));
                }
            }
        }
        string res="";
        while(!st.empty()){
            res+=st.top().first;
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};