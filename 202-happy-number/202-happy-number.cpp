class Solution {
public:
    void happynize(int &n){
        int temp=0;
        while(n!=0){
            temp+=pow((n%10),2);
            n/=10;
        }
        n=temp;
    }
    bool isHappy(int n) {
       unordered_map<int,bool>mp;
        mp[n]=true;
        while(true){
            happynize(n);
            
            if(n==1)return true;
            else if(mp[n])break;
            else mp[n]=true;
        }
        return false;
    }
};