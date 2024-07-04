class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // my approach 
        // i will create a vector which will store my modofied array value
        // then i intyialize zeroCOunt =0; which will used to get no of zero presrnt in array
        // then i will iterate while loop till start<= end
        // if nums[start]!=0 then i will add that no in ans array 
        // if nums[start]==0 then i will count no of zeroes by updataing the zeroeCount by 1
        // in last i will update nums = ans and then return nums
       vector<int> ans;
       int zeroCount=0;
       int start =0; 
       int end = nums.size()-1;
       while(start<=end){
           if(nums[start]!=0){
               ans.push_back(nums[start]);
           }
           else if(nums[start]==0){
               zeroCount++;
           }
           start++;
       }
       for(int i=0; i<zeroCount;i++){
           ans.push_back(0);
       }
       nums=ans;
       
    }
};