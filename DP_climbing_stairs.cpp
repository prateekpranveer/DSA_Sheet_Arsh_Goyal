class Solution {
public:
    int dp[46];
    int climbStairs(int n) {
        
        if (n==0) return 1;
        if (n==1) return 1;
        
        if (dp[n]!=0){
            return dp[n];
        }
        
        int ways = 0;
        ways = climbStairs(n-1);
        int ways2 = 0;
        ways2 = climbStairs(n-2);
        
        return dp[n] = ways + ways2;
        
        
    }
};
