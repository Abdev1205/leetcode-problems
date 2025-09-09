class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=1;
        int ele=nums[0];

        for(int i=1; i<nums.size(); i++){
            int currEle = nums[i];
            
            if(currEle!=ele){
                // update the value
                nums[index]=currEle;
                index++;
                ele=currEle;
            }
        }

        return index;


    }
};