class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<k){
                mp[nums[i]]++;
            }
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
                if(nums[i]==k/2&&k%2==0){cnt+=floor(mp[nums[i]]/2);mp[nums[i]]=0;}
                else if(mp[nums[i]]&&mp[k-nums[i]]){
                    cnt+=min(mp[nums[i]],mp[k-nums[i]]);
                    if(mp[nums[i]]>mp[k-nums[i]]){mp[nums[i]]-=mp[k-nums[i]];mp[k-nums[i]]=0;}
                    else if(mp[nums[i]]<mp[k-nums[i]]){mp[k-nums[i]]-=mp[nums[i]];mp[nums[i]]=0;}
                    else{mp[nums[i]]=0;mp[k-nums[i]]=0;}
                }
            }
        return cnt;
    }
};