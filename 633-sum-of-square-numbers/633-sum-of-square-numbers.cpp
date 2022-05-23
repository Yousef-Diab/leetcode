class Solution {
public:
    bool judgeSquareSum(int c) {
        for(long long i=0;i*i<=c;i++){
            long long temp=sqrt(c-(i*i));
            if(temp*temp==c-(i*i))return true;
        } 
        return false;
    }
};