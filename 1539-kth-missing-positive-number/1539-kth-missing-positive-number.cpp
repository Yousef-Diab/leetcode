class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for(int n:arr){
            if(n<=k)k++;
            else break;
        }
        return k;
    }
};