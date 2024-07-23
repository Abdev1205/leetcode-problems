class Solution {
public:

    void solveUsingRecursion(int index, int &maxprofit, int &minCost, vector<int> &prices){
        // base case
        if(index>=prices.size()){
            // we are out of array
            return;
        }

        int todaysCost = prices[index];
        int todaysProfit = todaysCost-minCost;
        // set the max profit
        maxprofit = max(maxprofit,todaysProfit);
        // set the min cost
        minCost = min(minCost,todaysCost);

        // calling the function recursively
        solveUsingRecursion(index+1,maxprofit,minCost,prices);

    }

    void solveUsingTab(int &maxprofit, int &minCost, vector<int> &prices){
        for(int i=1; i<prices.size(); i++){
            int todaysCost = prices[i];
            int todaysProfit = todaysCost-minCost;
            maxprofit = max(maxprofit,todaysProfit);
            minCost = min(minCost,todaysCost);
        }
    }

    int maxProfit(vector<int>& prices) {
        // Approach 
        // we will go throug the left and maintain the min value 
        // I will buy the stock daily and check thet my profit is greater than previos
        // If it is greater then we will update the max profit;
        // and same continues
        int maxprofit = 0;
        int minCost = prices[0];
        // solveUsingRecursion(1,maxprofit,minCost,prices);
        solveUsingTab(maxprofit,minCost,prices);
        return maxprofit;
    }
};