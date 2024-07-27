class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // brute force
        int n = nums.size();
        vector<int> ans(2,-1);
        for(int i=0; i<n; i++){
            if(nums[i]==target){
                ans[0]=i;
                break;
            }
        }

        for(int i =n-1; i>=0; i--){
            if(nums[i]==target){
                ans[1]=i;
                break;
            }
        }
        return ans;
    }
};