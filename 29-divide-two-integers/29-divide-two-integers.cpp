class Solution {
public:
    int divide(int dividend, int divisor) {
        long long res=(long long)(dividend)/(divisor);
        if(res>INT_MAX)return INT_MAX;
        if(res<INT_MIN)return INT_MIN;
        return res;
    }
};