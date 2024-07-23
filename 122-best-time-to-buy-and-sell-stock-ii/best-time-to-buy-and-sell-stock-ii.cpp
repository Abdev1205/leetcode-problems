class Solution {
public:

    int solveUsingRecursion(int index, bool buy,vector<int>& prices){
        // base case
        if(index>=prices.size()){
            return 0;
        }

        // 2 case would be there that we can buy or not
        if(buy){
            // means we can buy 
            int todaysCost = prices[index];
            // here also we have choice that we can but or leave it
            // include and exclude pattern
            // include we hace made todaysCost negative 
            // because we are buying so our profit will reduce  
            int include = -todaysCost + solveUsingRecursion(index+1, false, prices);
            int exclude = 0 + solveUsingRecursion(index+1, true, prices);

            // now we will return the max if we are buying
            return max(include,exclude);

        }
        else{
            // means that we have to sell 
            // here also we have choices that we can sell or not
            int todaysProfit = prices[index]; // that will be earned after selling the stock
            int include = todaysProfit + solveUsingRecursion(index+1, true, prices);
            int exclude = 0 + solveUsingRecursion(index+1, false, prices);

            // now we will return the max if we are selling
            return max(include,exclude);
        }
    }

    int solveUsingMemo(int index, bool buy,vector<int>& prices, vector<vector<int>> &dp){
        // base case
        if(index>=prices.size()){
            return 0;
        }
        // check value in dp
        if(dp[index][buy]!=-1){
            return dp[index][buy];
        }

        // 2 case would be there that we can buy or not
        if(buy){
            // means we can buy 
            int todaysCost = prices[index];
            // here also we have choice that we can but or leave it
            // include and exclude pattern
            // include we hace made todaysCost negative 
            // because we are buying so our profit will reduce  
            int include = -todaysCost + solveUsingMemo(index+1, false, prices,dp);
            int exclude = 0 + solveUsingMemo(index+1, true, prices,dp);

            // now we will return the max if we are buying
            // store in dp and then return 
            dp[index][buy] = max(include,exclude);
            return dp[index][buy];

        }
        else{
            // means that we have to sell 
            // here also we have choices that we can sell or not
            int todaysProfit = prices[index]; // that will be earned after selling the stock
            int include = todaysProfit + solveUsingMemo(index+1, true, prices,dp);
            int exclude = 0 + solveUsingMemo(index+1, false, prices,dp);

            // now we will return the max if we are selling
            // store in dp and then return 
            dp[index][buy] = max(include,exclude);
            return dp[index][buy];
        }
    }

    int maxProfit(vector<int>& prices) {
        bool buy = true;
        int index = 0;
        // return solveUsingRecursion(index,buy,prices); // 198 / 200 testcases passed
        vector<vector<int>> dp(prices.size()+1, vector<int>(2,-1));
        return solveUsingMemo(index,buy,prices,dp);

    }
};