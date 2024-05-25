class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        
        while (start < end) {
            if (nums[start]+nums[end] == target) {
                return {start+1, end+1};
            }
            else if(nums[start]+nums[end]>target){
                end--;
            }
            else if(nums[start]+nums[end]<target){
                start++;
            }
        }
        
        return {};
    }
};
