class Solution {
public:

    bool solveUsingMemo(int index,vector<int>& nums,int target,vector<vector<int>> &dp){
        if(index>=nums.size()){
            // which means no ans found
            return false;
        }

        if(target<0){
            return false;
        }

        if(target==0){
            // which means we have reached to solution
            return true;
        }

        if(dp[index][target]!=-1){
            return dp[index][target];
        }

        // inlcude 
        bool include = solveUsingMemo(index+1,nums, target-nums[index],dp);
        bool exclude = solveUsingMemo(index+1,nums, target,dp);

        dp[index][target] = include || exclude;
        return dp[index][target];
    }

    bool canPartition(vector<int>& nums) {
        // using recursive + dp to solve this

        // first find the target;
        int sum = accumulate(nums.begin(), nums.end(),0);
        cout<<"sum: "<<sum<<endl;
        if(sum%2!=0){
            return false;
        }
        int target = sum/2;

        vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));

        cout<<"target: "<<target<<endl;

        bool ans = solveUsingMemo(0,nums,target,dp);
        return ans;
    }
};