class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // my approach 
        // i will use binary search beacuse we need to solve this question in 0(logn)
        // i will initialize start = 0 and end = nums.size()-1;
        // now i will create a while loop which will iterate till start<=end
        // if (nums[mid]>target-1) which means we have to search in left side of search space so we will update ens = mid -1;
        // if(nums[mid]==target-1) which means our target in not ther in array and its approax postion will be mid +1 
        // if(nums[mid]<target-1) which means i have to search my target in right side so we will update start = mid+1;
        // in last we will return start which will be index of target ;
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
