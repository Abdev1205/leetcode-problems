class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {
        // brute force
        vector<int> ans;
        for (int i = 0; i < q.size(); i++) {
            int left = q[i][0];
            int right = q[i][1];

            int xorVal = 0;
            while(left<=right){
                xorVal^=arr[left];
                left++;
            }
            ans.push_back(xorVal);
        }

        return ans;
    }
};