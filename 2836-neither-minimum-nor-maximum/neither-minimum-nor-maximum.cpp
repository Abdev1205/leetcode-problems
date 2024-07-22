class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        // there is less amount of test case 
        // so we can go easy / brute force approach

        // case 1 : If length is less than or equql 2 so -1
        if(nums.size()<=2){
            return -1;
        }

        // Approach 1 o(n logn)
        // using stl sort to get max and min val return in bertween of nu,mebr
        // sort(nums.begin(),nums.end());
        // return nums[1];

        // Aprroach 2 o(n)
        int maxy = *max_element(nums.begin(),nums.end());
        int miny = *min_element(nums.begin(),nums.end());

        // now we are checkinng if no is not the min or max so we will return that
        for(auto n:nums){
            if(n!=maxy && n!=miny){
                return n;
            }
        }
        return -1;
    }
};