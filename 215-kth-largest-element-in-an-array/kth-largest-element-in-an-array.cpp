class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // Approach 1 --> we can use max heap but it will take o(N) space
        // Approach 2 --> so we are using min heap so that we reduce space complexyt to k
        // time complexity will be same o(N)

        priority_queue<int,vector<int>, greater<int>> minHeap;

        // add the k elements in min heap;
        for(int i=0; i<k; i++){
            minHeap.push(nums[i]);
        }

        // now add the value after k
        // if value is greate than top then 
        // we will first pop the top and then add the value and it heapify itself
        for(int i=k; i<nums.size(); i++){
            if(nums[i]>minHeap.top()){
                // then we have first remove the top element 
                minHeap.pop();
                // now add the value
                minHeap.push(nums[i]);
            }
        }

        cout<<"k largest element will be: "<<minHeap.top();

        return minHeap.top();
    }
};