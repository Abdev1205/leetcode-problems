class Solution {
public:

    const int mod = 1000000007;

    int solveRecursively(int n, int k, int target){
        if(n<0){
            return 0;
        }

        if(n==0 && target==0){
            return 1;
        }

        if(n!=0 && target==0){
            return 0;
        }

        if(n==0 && target!=0){
            return 0;
        }

        int sum =0;
        for(int i=1; i<k; i++){
            sum+=solveRecursively(n-1,k,target-i);
        }
        return sum % mod;
    }


    int solveUsingMemo(int n, int k, int target,vector<vector<int>> &dp){
        if(n<0){
            return 0;
        }

        if(n==0 && target==0){
            return 1;
        }

        if(n==0 && target!=0){
            return 0;
        }

        if(n!=0 && target==0){
            return 0;
        }

        if(dp[n][target]!=-1){
            return dp[n][target];
        }

        int ans =0;
        for(int i=1; i<=k; i++){
            int recAns =0;
            if(target-i>=0){
                recAns = solveUsingMemo(n-1,k,target-i,dp);
            }
            recAns = recAns %mod;
            ans = ans % mod;
            ans = (ans +  recAns) %mod;
        }
        dp[n][target]=ans;
        return dp[n][target];
    }



    int numRollsToTarget(int n, int k, int target) {
        // int ans = solveRecursively(n,k,target);
        vector<vector<int>> dp(n+1, vector<int>(target+1,-1));
        int ans =solveUsingMemo(n, k, target,dp);
        return ans;
    }
};