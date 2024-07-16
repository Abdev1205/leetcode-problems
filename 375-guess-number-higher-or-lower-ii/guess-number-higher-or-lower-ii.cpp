class Solution {
public:

    int solveUsingRecursion(int start, int end){
        // base case
        if(start>=end){
            return 0;
        }

        int ans = INT_MAX;

        for(int i=start; i<=end; i++){
            ans = min(ans ,i + max(solveUsingRecursion(start,i-1),solveUsingRecursion(i+1,end)));
        }
        return ans;
    }

    int solveUsingMemo(int start, int end, vector<vector<int>> &dp){
        // base case
        if(start>=end){
            return 0;
        }

        if(dp[start][end] != -1){
            // cout<<"used dp when start = "<<start<<" and end = "<<end<<endl;
            return dp[start][end];
        }

        int ans = INT_MAX;

        for(int i=start; i<=end; i++){
            ans = min(ans ,i + max(solveUsingMemo(start,i-1,dp),solveUsingMemo(i+1,end,dp)));
        }
        dp[start][end] = ans;
        return dp[start][end];
    }

    int getMoneyAmount(int n) {
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        // int ans = solveUsingRecursion(1, n);
        int ans = solveUsingMemo(1, n,dp);
        return ans;
    }
};