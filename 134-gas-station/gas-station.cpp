class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // kitna petrol kam ho raha  hai
        int deficit=0;
        // kitna petrol bcaha hai
        int balance=0;
        // kaha se start kar rahe hai
        int start=0;

        for(int i=0; i<gas.size(); i++){
            balance+=gas[i]-cost[i];
            if(balance<0){
                // iska matlab hamare pass petrol nahi hai utna
                // to hum use deficit me store kar lenge 
                // fir start ko bhi update kar denge
                deficit+=balance;
                start=i+1;
                // reseting the balance
                balance=0;
            }
        }

        if(deficit+balance>=0){
            return start;
        }
        return -1;
    }
};