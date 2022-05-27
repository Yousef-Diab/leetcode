class Solution {
public:
    int numberOfSteps(int num) {
        int res=0;
        while(num!=0){
            num%2==0?num/=2:num--;
            res++;
        }
        return res;
    }
};