class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // solving inplace
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                // which means we found the duplicate 
                // so we are erasing it 
                nums.erase(nums.begin()+i);
                // we are moving back beacause after erase vector compress itself
                // so we are missing ele so when we are removing 
                // we will go back 
                i--;
            }
        }
        return nums.size();

    }
};