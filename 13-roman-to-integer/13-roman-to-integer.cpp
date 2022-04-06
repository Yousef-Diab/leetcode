class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        char lastCh='A';
        for(int i = s.length()-1; i>=0;i--){
            if(s[i]=='I'){
                if(lastCh == 'V' || lastCh =='X'){
                    ans--;
                }
                else{
                    ans++;
                }
            }
            else if(s[i]=='X'){
                if(lastCh == 'L' || lastCh =='C'){
                    ans-= 10;
                }
                else{
                    ans +=10;
                }
            }
            else if(s[i]=='C'){
                if(lastCh == 'D' || lastCh =='M'){
                    ans-= 100;
                }
                else{
                    ans +=100;
                }
            }
            else if(s[i]=='V'){
                ans +=5;
            }
            else if(s[i]=='L') ans += 50;
            else if(s[i]=='D') ans += 500;
            else if(s[i]=='M') ans += 1000;
            
            lastCh = s[i];
            
        }
        return ans;
    }
};