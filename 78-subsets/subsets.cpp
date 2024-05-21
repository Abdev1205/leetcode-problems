class Solution {
public:

    void findSubsets(vector<int>& nums,vector<vector<int>> &ans, vector<int> &curr, int i){
        if(i>=nums.size()){
            ans.push_back(curr);
            return;
        }

        // exclude
        findSubsets(nums,ans,curr,i+1);

        //include
        curr.push_back(nums[i]);
        findSubsets(nums,ans,curr,i+1);
        curr.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        findSubsets(nums,ans,curr,0);
        return ans;
    }
};