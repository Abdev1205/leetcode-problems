class Solution {
public:

    int solveUsingRecursion(vector<int> &arr, int curr, int prev){
        // base case
        if(curr>=arr.size()){
            return 0;
        }

        // include
        int include = 0;
        if(prev==-1 || arr[curr] > arr[prev]){
            include = 1 + solveUsingRecursion(arr, curr+1, curr);
        }

        // exclude 
        int exclude = 0 + solveUsingRecursion(arr, curr+1, prev);

        int ans = max(include,exclude);
        return ans;
    }


    int solveUsingMemo(vector<int> &arr, int curr, int prev, vector<vector<int>> &dp){
        // base case
        if(curr>=arr.size()){
            return 0;
        }

        // checking the value in dp
        if(dp[curr][prev+1]!=-1){
            return dp[curr][prev+1];
        }

        // include
        int include = 0;
        if(prev==-1 || arr[curr] > arr[prev]){
            include = 1 + solveUsingMemo(arr, curr+1, curr,dp);
        }

        // exclude 
        int exclude = 0 + solveUsingMemo(arr, curr+1, prev,dp);

        int ans = max(include,exclude);
        dp[curr][prev+1]=ans;

        return dp[curr][prev+1];
    }
 
    int lengthOfLIS(vector<int>& nums) {
        int curr = 0;
        int prev = -1;
        int n = nums.size();
        
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));

        // return solveUsingRecursion(nums,curr,prev);
        return solveUsingMemo(nums,curr,prev,dp);
    }
};