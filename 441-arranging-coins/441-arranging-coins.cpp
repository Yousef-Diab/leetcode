class Solution {
public:
    int arrangeCoins(int n) {
       int cnt=0;
        long long t=n;
        long long i=1;
        int res=-1;
        if(n==1)return 1;
        while(t>=0){
            res++;
            t-=i++;
        }
        return res;
    }
};