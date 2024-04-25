class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int roundable = purchaseAmount%10;
        if(roundable<5){
            purchaseAmount=purchaseAmount-roundable;
        }else if(roundable>=5){
            int add = 10-roundable;
            purchaseAmount=purchaseAmount+add;
        }
        return 100-purchaseAmount;
    }
};