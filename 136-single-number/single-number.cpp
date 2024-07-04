class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique = 0;
        for(auto n:nums){
            unique^=n;
        }
        return unique;
    }
};