class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        long long m=0;
        n--;
        while(left<right){
            int l=height[left];
            int r=height[right];
            long long temp=min(l,r)*n;
            m=max(m,temp);
            if(l<r){
                left++;
                n--;
            }
            else{
                right--;
                n--;
            }
        }
        return m;
    }
};