class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // Using two pointer approach
        vector<int> ans(nums.size());
        int lessy = 0;
        int morry = nums.size()-1;

        for(int i=0 ,j=nums.size()-1; i<nums.size(); i++, j--){
            if(nums[i]<pivot){
                ans[lessy]=nums[i];
                lessy++;
            }
            if(nums[j]>pivot){
                ans[morry]=nums[j];
                morry--;
            }
        }

        // adding equal value in array 
        while(lessy<=morry){
            ans[lessy] = pivot;
            lessy++;
        }

        return ans;

    }
};