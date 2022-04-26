class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int least=INT_MAX;
        int profit=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<least)
                least=prices[i];
            profit=prices[i]-least;
            if(profit>ans)
                ans=profit;
        }
        return ans;
    }
};