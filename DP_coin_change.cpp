class Solution {
public:
    int dp[10006];
    int change(vector <int> &coins, int amount){
        if (amount==0) return 0;
        int minm = INT_MAX; if (dp[amount]!=-1) return dp[amount];
        for (int i = 0; i<coins.size(); i++){
            if (amount>=coins[i])
                minm = min(minm +0ll, change(coins, amount-coins[i])+1ll);
        }
        return dp[amount] = minm;
    }
    
    int coinChange(vector<int>& coins, int amount) {   
        memset(dp, -1, sizeof(dp));
        return change(coins,amount) == INT_MAX ? -1 : change(coins,amount);
    }
};
