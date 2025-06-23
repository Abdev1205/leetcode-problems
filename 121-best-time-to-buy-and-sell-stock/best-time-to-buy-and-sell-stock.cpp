class Solution {
public:

    void bestStock(vector<int>& p, int i, int &minPrice, int &maxProfit){
        // base case
        if(i==p.size()){
            return;
        }

        //1 case hum solve karenge baki recursion dekh lega
        if(p[i]<minPrice){
            minPrice=p[i];
        }
        int todaysProfit = p[i]-minPrice;
        if(todaysProfit>maxProfit){
            maxProfit = todaysProfit;
        }

        // recursively calling function 
        bestStock(p,i+1,minPrice,maxProfit);


    }

    int maxProfit(vector<int>& p) {
        int minPrice=INT_MAX;
        int maxProfit=INT_MIN;
        int i=0;
        bestStock(p,i,minPrice,maxProfit);
        return maxProfit;

    }
};