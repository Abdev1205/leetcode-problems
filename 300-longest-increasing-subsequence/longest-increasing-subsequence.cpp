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

    int solvingUsingTab(vector<int>& arr){
        int n = arr.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int curr = n-1; curr>=0; curr--){
            for(int prev=curr-1; prev>=-1; prev--){
                // include
                int include = 0;
                if(prev==-1 || arr[curr] > arr[prev]){
                    include = 1 + dp[curr+1][curr+1];
                }

                // exclude 
                int exclude = 0 + dp[curr+1][prev+1];

                int ans = max(include,exclude);
                dp[curr][prev+1]=ans;
            }
        }
        return dp[0][0];
    }

    int optimal(vector<int> &nums){
        vector<int> ans;
        ans.push_back(nums[0]);

        for(int i=1; i<nums.size(); i++){
            if(nums[i]>ans.back()){
                //include
                ans.push_back(nums[i]);
            }
            else{
                // find index of just bada element
                int index = lower_bound(ans.begin(), ans.end(), nums[i])-ans.begin();
                ans[index] = nums[i];
            }
        }
        return ans.size();
    }
 
    int lengthOfLIS(vector<int>& nums) {
        int curr = 0;
        int prev = -1;
        int n = nums.size();
        
        // vector<vector<int>> dp(n+1,vector<int>(n+1,-1));

        // return solveUsingRecursion(nums,curr,prev);
        // return solveUsingMemo(nums,curr,prev,dp);
        // return solvingUsingTab(nums);
        return optimal(nums);
    }
};