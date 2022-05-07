class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<pair<int,int>>st;
        int m=nums[0];
        st.push(make_pair(nums[0],nums[0]));
        for(int i=1;i<nums.size();i++){
            while(!st.empty()&&nums[i]>=st.top().first)st.pop();
            if(!st.empty()){
                if(nums[i]>st.top().second)return true;
            }
            st.push(make_pair(nums[i],m));
            m=min(m,nums[i]);
        }
        return false;
    }
};