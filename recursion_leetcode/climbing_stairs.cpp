class Solution {
public:
    
    int calculate(int n, vector<int>& dp) {
        if (n == 1 || n == 2) return n;
        if (dp[n] != -1) return dp[n];
        return dp[n] = calculate(n-1, dp) + calculate(n-2, dp);
    }
    
    int climbStairs(int n) {
        vector<int> dp(45, -1);
        return calculate(n, dp);
    }
};