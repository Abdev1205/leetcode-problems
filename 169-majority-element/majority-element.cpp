class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Using Moore's Voting Algo 
        // IN this algo we will assume a Majority num in two case 
        // case 1 : If we are starting the iteration 
        // case 2 : If we got the count 0 which means all other num cancel the majority ones
        // At last if we get the majority ele which is greater than 0 
        // that will be our majority element 

        int len = nums.size();
        int ele = nums[0];
        int count = 0;

        for(int i=0; i<len; i++){
            int currEle = nums[i];
            if(count==0){
                // Here Case 1 and case 2 will apply 
                // and we will choose new majority
                ele = currEle;
                count++;
            }
            else if(currEle==ele){
                // the just increase the count
                count++;
            }
            else{
                // then just decrease the count
                count--;
            }
        }

        return ele;
    }
};