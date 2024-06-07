class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;


        // first window ko solve karlo
        for(int i=0; i<k; i++){
            // chote elemet ko remove kar na hai
            while(!dq.empty() && nums[i]>=nums[dq.back()]){
                dq.pop_back();
            }

            // nahi to hum push back kar denge 
            dq.push_back(i);
        }

        // storing the answer of first window
        ans.push_back(nums[dq.front()]);

        // handling other remaining elements
        for(int i=k; i<nums.size(); i++){
            // out of window ko remove karna hai
            while(!dq.empty() && i-dq.front()>=k){
                dq.pop_front();
            }

            // chote elemet ko remove kar na hai
            while(!dq.empty() && nums[i]>=nums[dq.back()]){
                dq.pop_back();
            }

            // nahi to hum push back kar denge 
            dq.push_back(i);

            // current window ka andqer store kar denge 
            ans.push_back(nums[dq.front()]);
        }

        return ans;
    }
};