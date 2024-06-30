class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter=0;
        int maxy=0;

        for(auto n : nums){
            if(n==1){
                counter++;
                maxy = max(counter,maxy);
            }
            else{
                counter=0;
            }
        }
        return maxy;
    }
};