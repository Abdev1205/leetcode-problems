class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0; 
        int end = nums.size()-1;
        int mid = start + (end - start)/2;
        while(start<=end){
            if(nums[mid]>target-1){
                end=mid-1;
            }
            else if(nums[mid]==target-1){
                return mid+1;
            }
            else if(nums[mid]<target-1){
                start=mid+1;
            }
            mid= start + (end - start)/2;
        }
        return start;
    }
};