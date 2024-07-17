class Solution {
public:

    static bool compare(vector<int> a, vector<int>b){
        return a[0]<b[0];
    }
    static bool compareH(vector<int> a, vector<int>b){
        // if same width then sort by height in decreasing order
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }

    int solveUsingRecursive(vector<vector<int>>& env, int curr, int prev){
        if(curr>=env.size()){
            return 0;
        }

        int include =0;
        if(prev==-1 || env[curr][0] > env[prev][0] && env[curr][1] > env[prev][1]){
            // then include it
            include = 1 + solveUsingRecursive(env,curr+1,curr);
        }

        int exclude = 0 + solveUsingRecursive(env,curr+1,prev);
        int ans = max(include,exclude);

        return ans;
    }

    int solveUsingMemo(vector<vector<int>>& env, int curr, int prev, vector<vector<int>> &dp){
        // base case
        if(curr>=env.size()){
            return 0;
        }

        // check if  value is present or not
        if(dp[curr][prev+1]!=-1){
            return dp[curr][prev+1];
        }

        int include = 0;
        if(prev==-1 || env[curr][0] > env[prev][0] && env[curr][1] > env[prev][1] ){
            include = 1 + solveUsingMemo(env,curr+1,curr,dp);
        }

        int exclude = 0 + solveUsingMemo(env,curr+1,prev,dp);
        int ans = max(include,exclude);

        dp[curr][prev+1] = ans;

        return dp[curr][prev+1];
    }

    int solveUsingTab(vector<vector<int>>& env){
        vector<vector<int>> dp(env.size()+2, vector<int>(env.size()+2,0));
        int n = env.size();

        for(int curr=n-1; curr>=0; curr--){
            for(int prev=curr-1; prev>=-1; prev--){
                int include = 0;
                if (prev == -1 || (env[curr][0] > env[prev][0] && env[curr][1] > env[prev][1])) {
                    // if (curr + 1 <= n) {
                        include = 1 + dp[curr + 1][curr + 1];
                    // }
                }

                int exclude = 0;
                // if (curr + 1 <= n) {
                    exclude = 0 + dp[curr + 1][prev + 1];
                // }
                int ans = max(include,exclude);

                dp[curr][prev+1] = ans;
            }
        }
        return dp[0][0];

    }

    int optimal(vector<vector<int>>& env){
        sort(env.begin(),env.end(),compareH);

        if(env.size()==0){
            return 0;
        }
        vector<int> ans;
        ans.push_back(env[0][1]);

        for (int i = 1; i < env.size(); i++) { // Start from 1 instead of 0
            if (env[i][1] > ans.back()) {
                ans.push_back(env[i][1]);
            } else {
                // Find index to replace
                int index = lower_bound(ans.begin(), ans.end(), env[i][1]) - ans.begin();
                ans[index] = env[i][1];
            }
        }
        return ans.size();
    }

    int maxEnvelopes(vector<vector<int>>& env) {
        // // trying to sort();
        // sort(env.begin(),env.end(),compare);

        // // for(auto e:env){
        // //     cout<<e[0]<<" -> "<<e[1]<<endl;
        // // }

        // int curr = 0;
        // int prev = -1;

        // vector<vector<int>> dp(env.size()+1, vector<int>(env.size()+1,-1));

        // return solveUsingRecursive(env,curr,prev);
        // return solveUsingMemo(env,curr,prev,dp);
        // return solveUsingTab(env);
        return optimal(env);
        
        // return -1;
    }
};