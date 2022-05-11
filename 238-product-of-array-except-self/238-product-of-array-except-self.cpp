class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long n=1;
        int zero=0;
        for(int num:nums){
            if(num==0)zero++;
            else n*=num;
        }
        if(zero==1){
            vector<int> res(nums.size());
            for(int i=0;i<nums.size();i++)
                if(nums[i]==0)res[i]=n;
                else res[i]=0;
            return res;
        }
        else if(zero>1){
            vector<int> res(nums.size(),0);
            return res;
        }
        else{
            vector<int> res(nums.size());
        for(int i=0;i<nums.size();i++){
            res[i]=n/nums[i];
        }
            return res;
        }
        return {};
    }
};