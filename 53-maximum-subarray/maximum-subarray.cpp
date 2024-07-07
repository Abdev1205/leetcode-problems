class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // this is kadane algo 
        // where where are taking the sum whose sum is greater than the 0
        // we are not taking sum which is lesser than 0 
        // beacuse it will reduce our sum 
        int maxy = INT_MIN;
        int sum = 0;
        for(auto n:nums){
            // sum ko update kar do
            sum+=n;
            // check for maximum 
            maxy = max(maxy,sum);
            // agar sum 0 se kam hai to use lene ka matlab nahi hai 
            // isliye sum ko 0 save kar lete hai
            if(sum<0){
                sum=0;
            }
        }
        return maxy;
    }
};