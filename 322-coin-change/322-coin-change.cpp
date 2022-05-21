class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[amount+1];
        for(int i=0;i<=amount;i++)dp[i]=amount+1;
        dp[0] = 0;
        for(int coin : coins) {
            for(int i = coin; i <=amount; i++){
                dp[i] = min(dp[i], dp[i-coin]+1);
            }
        }
        return dp[amount] <= amount ? dp[amount] : -1;
    }
};