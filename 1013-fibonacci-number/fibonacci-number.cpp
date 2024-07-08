class Solution {
public:

    int solve(int n, vector<int> &dp){
        if(n<=1){
            return n;
        }

        //check that value is present in dp or not
        // if present then don't call resursive fun use that value
        if(dp[n]!=-1){
            return dp[n];
        }

        // if value is not found
        return solve(n-1,dp) + solve(n-2,dp);
    }

    int fib(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp); 
        
    }
};