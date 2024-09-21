class Solution {
public:
    vector<int> lexicalOrder(int n) {
        // brute force
        vector<string> nums;
        for(int i=1; i<=n; i++){
            string s = to_string(i);
            nums.push_back(s);
        }

        sort(nums.begin(),nums.end());

        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int l = stoi(nums[i]);
            ans.push_back(l);
        }
        return ans;
    }
};