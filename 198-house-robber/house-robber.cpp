class Solution {
public:

    int solveRecursively(vector<int> &nums,int end){
        // we are going through last house 
        // so if we have moved ahead of first house 
        if(end<0){
            return 0;
        }
        // if there is only 1 house
        if(end==0){
            return nums[0];
        }


        // including the house then we have to leave one house 
        // to maintain the alternate house pattern 
        int include = solveRecursively(nums,end-2) + nums[end];

        // excluding the house which means we are not robbing 
        // so we can go for next house 
        int exclude = solveRecursively(nums,end-1) + 0;

        // now we have both include and exlude ans 
        // so we will return max from them

        return max(include,exclude);
    }

    int solveMem(vector<int> &nums,int end, vector<int> &dp){
        if(end<0){
            return 0;
        }

        if(end==0){
            return nums[0];
        }

        // checking that value is present in dp or not
        if(dp[end]!=-1){
            return dp[end];
        }

        int include = solveMem(nums,end-2,dp) + nums[end];
        int exclude = solveMem(nums,end-1,dp) + 0;

        // adding the value in dp 
        dp[end] = max(include,exclude);
        return dp[end];

    }

    int rob(vector<int>& nums) {
        // solving recursiverly
        vector<int> dp(nums.size()+1,-1);
        int end = nums.size()-1;
        // int ans = solveRecursively(nums,end);
        int ans = solveMem(nums,end,dp);
        return ans;
    }
};