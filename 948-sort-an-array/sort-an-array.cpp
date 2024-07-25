class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // we have lot of approach 
        // like heap , merge, quick, map sort and ,mamy more

        // now trying to sort the array using heap sort

        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto n:nums){
            pq.push(n);
        }

        int i=0;
        while(!pq.empty()){
            int val = pq.top();
            cout<<val<<" ";
            nums[i] = val;
            pq.pop();
            i++;
        }

        return nums;
    }
};