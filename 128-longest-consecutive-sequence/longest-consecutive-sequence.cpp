class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        
        sort(nums.begin(), nums.end());
        
        int currCount = 1;
        int largest = 1;
        int lastSmaller = nums[0];  // Initialize with the first element

        for(int i = 1; i < nums.size(); i++){
            int val = nums[i];
            if (val == nums[i - 1]) {
                continue;  // Skip duplicates
            } 
            else if (val - 1 == lastSmaller) {
                currCount++;
            } 
            else {
                currCount = 1;
            }
            lastSmaller = val;  // Update lastSmaller for next iteration
            largest = max(largest, currCount);
        }
        
        return largest;
    }
};
