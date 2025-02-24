class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int len = nums.size();
        if (len == 0) return {};

        vector<string> ans;
        int SI = 0;

        for (int i = 1; i < len; i++) {
            if ((long long)nums[i] - (long long)nums[i - 1] != 1) {
                int EI = i - 1;
                if (nums[SI] == nums[EI]) {
                    ans.push_back(to_string(nums[SI]));
                } else {
                    ans.push_back(to_string(nums[SI]) + "->" + to_string(nums[EI]));
                }
                SI = i;
            }
        }

        if (SI == len - 1) {
            ans.push_back(to_string(nums[SI]));
        } else {
            ans.push_back(to_string(nums[SI]) + "->" + to_string(nums[len - 1]));
        }

        return ans;
    }
};
