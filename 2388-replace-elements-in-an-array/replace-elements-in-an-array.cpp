class Solution {
public:


    void solve(vector<int>& nums,vector<vector<int>>& operations){
        // now we are getting tle so we use map to find the element the data in O(N)
        map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]=i;
        }

        for(int i=0; i<operations.size(); i++){
            auto it = mp.find(operations[i][0]);
            if(it!=mp.end()){
                int f=it->second;
                nums[f]=operations[i][1];
                // erase the map
                mp.erase(it);
                // adding new value
                mp[operations[i][1]]=f;

            }
            
        }
    }

    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        solve(nums,operations);
        return nums;
    }
};