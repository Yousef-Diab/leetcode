/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long l=1,r=n;
        while(true){
            long long m=(l+r)/2;
            int temp=guess(m);
            if(!temp)return m;
            temp==-1?r=m-1:l=m+1;
        }
        return 0;
    }
};