class Solution {
public:

    void solve(int index, vector<int> &curr, vector<int> &nums, vector<vector<int>> &ans){
        
        ans.push_back(curr);
        for(int i=index; i<nums.size(); i++){
            // if we found the same so we have to ignore it
            if(i!=index && nums[i]==nums[i-1]){
                continue;
            }

            curr.push_back(nums[i]);
            solve(i+1, curr, nums, ans);
            curr.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // Approach to handle duplicate we can sort and then apply the opertaion

        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> curr;
        int index = 0;

        solve(index,curr,nums,ans);
        return ans;
    }
};