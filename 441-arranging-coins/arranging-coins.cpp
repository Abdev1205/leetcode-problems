class Solution {
public:
    int arrangeCoins(int n) {
        int rc = 0;
        while(n>0){
            int coinUsed = rc+1;
            if(n<coinUsed){
                break;
            }
            n = n - coinUsed;
            rc++;
        }
        return rc;
    }
};