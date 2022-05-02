class Solution {
public:
    void swap(int &num1,int &num2){
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(i>j)j=i;
            if(nums[i]%2!=0){
                while(j+1<nums.size()&&nums[j]%2!=0)j++;
                swap(nums[i],nums[j]);
            }
            if(j==nums.size()-1)break;
        }
        return nums;
    }
};