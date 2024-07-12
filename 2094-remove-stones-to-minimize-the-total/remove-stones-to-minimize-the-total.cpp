class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        // Approach 1 
        // Greedy Approach using max heap 

        priority_queue<int> pq;

        for(int i=0; i<piles.size(); i++){
            pq.push(piles[i]);
        }

        // Now Applying the k operation 
        while(k--){
            int topEle = pq.top();
            // popping the max value for the operation
            pq.pop();
            topEle = topEle - floor(topEle/2);
            pq.push(topEle);

        }

        // get all the reamining the stones
        int leftStones = 0;
        while(!pq.empty()){
            int val = pq.top();
            leftStones+=val;
            pq.pop();
        }
        return leftStones;
    }
};