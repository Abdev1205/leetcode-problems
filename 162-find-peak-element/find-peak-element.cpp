class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // using binary search
        int start = 0;
        int end = nums.size()-1;

        while(start<end){
            int mid = start + (end-start)/2;
            if(nums[mid]>nums[mid+1]){
                // which means peak will in left side becuase after that all no will be decreasing
                end = mid; 
            }
            else{
                // means mid is smaller so we can find in right
                start = mid+1;
            }
        }
        return start;
    }
};