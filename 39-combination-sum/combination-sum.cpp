class Solution {
public:

    void solve(int index, int target, vector<int>& a,vector<int> &curr, vector<vector<int>> &ans){
        // base case 
        if(index>=a.size()){
            if(target==0){
                ans.push_back(curr);
            }
            return ;
        }

        // include 
        if(a[index]<=target){
            // then we can pick that 
            curr.push_back(a[index]);
            solve(index,target-a[index],a,curr, ans);
            curr.pop_back();
        }
        
        // we have to exclude 
        solve(index+1,target,a,curr,ans);
        
    }

    vector<vector<int>> combinationSum(vector<int>& a, int target) {
        vector<vector<int>> ans;
        vector<int> curr;
        int index = 0;
        solve(index,target, a, curr, ans);
        return ans;
    }
};