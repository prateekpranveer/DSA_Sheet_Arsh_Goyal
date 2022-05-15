class Solution {
public:
    int dp[1001];
    int minCost(vector <int> &cost, int n){
        if (n==0) return 0;
        if (n==1) return 0;
        if(dp[n]!=0) return dp[n];
        
        int cost1 = 0;
        cost1 = minCost(cost,n-1)+cost[n-1];
        int cost2 = 0;
        cost2 = minCost(cost, n-2)+cost[n-2];
        
        return dp[n]  = min(cost1,cost2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        return minCost(cost,n);    
        
    }
};
