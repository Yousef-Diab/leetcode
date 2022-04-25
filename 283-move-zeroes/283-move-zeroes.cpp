class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n!=1)
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                for(int j=i;j+1<n;j++){
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
                i--;
                n--;
            }
        }
    }
};