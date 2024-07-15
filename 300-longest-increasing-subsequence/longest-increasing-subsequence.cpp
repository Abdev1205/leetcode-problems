class Solution {
public:

    void getSub(int index, vector<int> &nums, vector<int> &current, vector<vector<int>> &sub,vector<int> &dp){
        // base case
        if(index>=nums.size()){
            // means we are end of the nums
            sub.push_back(current);
            return;
        }

        // include 
        if(current.empty() || nums[index] > current.back()){
            current.push_back(nums[index]);
            getSub(index+1, nums, current, sub,dp);
            current.pop_back();
        }

        // exclude
        getSub(index+1, nums, current, sub,dp);
    }

    int lengthOfLIS(vector<int>& nums) {
        // getting memory limit due to recursive funcation 
        // so using table appaoach

        // vector<vector<int>> sub;
        // vector<int> current;
        vector<int> dp(nums.size()+1 ,1);
        // getSub(0,nums,current,sub,dp);
        // cout<<"size of sub "<<sub.size()<<endl;
        int maxy = INT_MIN;
        // for(auto s:sub){
        //     // cout<<"{";
        //     // for(auto a:s){
        //     //     cout<<" "<<a;
        //     // }
        //     // cout<<" }"<<endl;
        //     int n = s.size();
        //     maxy = max(maxy,n);
        // }

        // tablutaion approach
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if (nums[i] > nums[j]) {
                    dp[i] = max(dp[i], dp[j] + 1); 
                }
            }
            maxy = max(maxy,dp[i]);
        }

        // for(auto d:dp){
        //     maxy = max(maxy,d);
        // }
        return maxy;
    }
};