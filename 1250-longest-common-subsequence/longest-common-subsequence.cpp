class Solution {
public:
    int solveUsingRecursion(string a, string b, int i, int j) {
        // base case
        if (i == a.length()) {
            return 0;
        }
        if (j == b.length()) {
            return 0;
        }

        int ans = 0;

        if (a[i] == b[j]) {
            ans = 1 + solveUsingRecursion(a, b, i + 1, j + 1);
        } else {
            ans = 0 + max(solveUsingRecursion(a, b, i, j + 1),
                          solveUsingRecursion(a, b, i + 1, j));
        }
        return ans;
    }

    int solveUsingMemo(string& a, string& b, int i, int j,
                       vector<vector<int>>& dp) {
        // base case
        if (i == a.length()) {
            return 0;
        }
        if (j == b.length()) {
            return 0;
        }
        int ans = 0;

        // if value present in dp
        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        if (a[i] == b[j]) {
            ans = 1 + solveUsingMemo(a, b, i + 1, j + 1, dp);
        } else {
            ans = 0 + max(solveUsingMemo(a, b, i, j + 1, dp),
                          solveUsingMemo(a, b, i + 1, j, dp));
        }
        dp[i][j] = ans;
        return dp[i][j];
    }

    int solveUsingTab(string &a, string &b){
        vector<vector<int>> dp(a.size()+1, vector<int>(b.size()+1, 0));

        int ans =0;
        for(int i=a.size()-1; i>=0; i--){
            for(int j=b.size()-1; j>=0; j--){
                if (a[i] == b[j]) {
                    ans = 1 + dp[i + 1][j + 1];
                } else {
                    ans = 0 + max(dp[i][j + 1],dp[i + 1][j]);
                }
                dp[i][j] = ans; 
            }
        }
        return dp[0][0];
    }

    int longestCommonSubsequence(string text1, string text2) {
        // int i = 0;
        // int j = 0;
        // int n1 = text1.size();
        // int n2 = text2.size();
        // vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, -1));
        // // return solveUsingRecursion(text1,text2,i,j,dp);
        // return solveUsingMemo(text1, text2, i, j, dp);
        return solveUsingTab(text1,text2);
    }
};