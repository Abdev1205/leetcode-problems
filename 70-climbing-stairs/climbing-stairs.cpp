class Solution {
public:

    int solveRecursive(int n, vector<int>& dp){
        if(n==0 || n==1){
            return 1;
        }
        if(dp[n]){
            return dp[n];
        }
        dp[n] = solveRecursive(n-1,dp) + solveRecursive(n-2,dp);
        return dp[n];

    }

    int solveIterative(int n){
        if(n == 0 || n == 1) return 1;

        vector<int> dp(n+1, 0);
        dp[0] = dp[1] = 1; 
        for(int i = 2; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-2]; 
        }

        return dp[n]; 
    }

    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        return solveIterative(n);
    }
};