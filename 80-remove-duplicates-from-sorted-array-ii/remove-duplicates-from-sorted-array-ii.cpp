class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int sum=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                sum++;
            }
            else{
                sum=1;
            }
            if(sum>2){
                nums.erase(nums.begin()+(i+1));
                i--;
                n--;
            }
        }
        return n;

    }
};