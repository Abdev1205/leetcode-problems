class Solution {
public:
    int findPeak(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] > nums[end]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }
        return start;
    }

    int findBinary(int start, int end, int target, vector<int>& nums) {
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        // Approach 1
        // First we can find the peak/pivot index 
        // and then we can divide the array in two parts 
        // then we can apply the binary search in each part
        // Finding the pivot element
        int pivot = findPeak(nums);
        
        // If we found the target at pivot, return pivot
        if (nums[pivot] == target) {
            return pivot;
        }

        // Perform binary search in both parts
        int ans1 = findBinary(0, pivot - 1, target, nums);
        if (ans1 != -1) {
            return ans1;
        }

        int ans2 = findBinary(pivot, nums.size() - 1, target, nums);
        if (ans2 != -1) {
            return ans2;
        }

        return -1;
    }
};
