class Solution {
public:

    void solve(int index, int target, vector<int>& a,vector<int> &curr, vector<vector<int>> &ans){
        // base case 
        if(target==0){
            ans.push_back(curr);
            return;
        }

        for(int i=index; i<a.size(); i++){
            // we have to avoid same element so we will just ignore them
            if(i>index && a[i]==a[i-1]){
                continue;
            }
            // if target is less than curr value then we will get greater all the greter value only
            // so we have to break 
            if(a[i]>target){
                break;
            }
            // include 
            curr.push_back(a[i]);
            solve(i+1, target-a[i], a, curr, ans);
            curr.pop_back();
        }
        
    }

    vector<vector<int>> combinationSum2(vector<int>& a, int target) {
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        int index = 0;
        vector<int> curr;
        solve(index,target, a, curr, ans);
        return ans;
    }
};