class Solution {
public:

    int solveRecursively(vector<int>& coins, int amount){
        // base case
        if(amount==0){
            return 0;
        }
        if(amount<0){
            return INT_MAX;
        }

        int miny = INT_MAX;

        for(int i=0; i<coins.size(); i++){
            int ans = solveRecursively(coins, amount - coins[i]);
            if(ans!=INT_MAX){
                miny = min(miny, 1+ans);
            }
            
        }
        return miny;
    }

    int solveMem(vector<int>& coins, int amount,vector<int> &dp){
        // base case
        if(amount==0){
            return 0;
        }
        if(amount<0){
            return INT_MAX;
        }

        int miny = INT_MAX;

        // if value is present in dp so return it there only without computation
        if(dp[amount]!=-1){
            return dp[amount];
        }

        for(int i=0; i<coins.size(); i++){
            int ans = solveMem(coins, amount - coins[i],dp);
            if(ans!=INT_MAX){
                miny = min(miny, 1+ans);
            }
            
        }
        // add the value in dp
        dp[amount]=miny;
        return miny;
    }

    int coinChange(vector<int>& coins, int amount) {
        // solving using recursive approach
        // getting tle so we are going to use Dpo here
        // int ans = solveRecursively(coins,amount);
        vector<int> dp(amount+1,-1);
        int ans = solveMem(coins,amount,dp);
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};