class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // using map to solve it in 0(n)
        // and we will not use any extra space 
        // instead of taking a constant space for i
        unordered_map<int,int> mp;
        for(auto n:nums){
            mp[n]++;
        }
        // getting all the frequency 
        // if greater than 1 mean equal to 2
        int i=0;
        for(auto m:mp){
            cout<<m.first<<" : "<<m.second<<endl;
            if(m.second>=2){
                nums[i]=m.first;
                i++;
            }
        }
        // now we will remove the rest of the ele from the array 
        nums.erase(nums.begin()+i,nums.end());
        return nums;
    }
};