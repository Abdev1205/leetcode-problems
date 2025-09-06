class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZIndex =0; 
        int len = nums.size();
        for(int i=0; i<len; i++){
            if(nums[i]!=0){
                nums[nonZIndex]=nums[i];
                nonZIndex++;
            }
        }

        // adding zzeros after nonZindez
        for(int i=nonZIndex; i<len; i++){
            nums[i]=0;
        }
    }
};