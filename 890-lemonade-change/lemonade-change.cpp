class Solution {
public:
    bool lemonadeChange(vector<int>& b) {
        int fiveRupees = 0, tenRupees = 0;

        for(int i = 0; i < b.size(); i++){
            if(b[i] == 5){
                fiveRupees++;
            }
            else if(b[i] == 10){
                if(fiveRupees > 0) {
                    fiveRupees--;
                    tenRupees++;
                } else {
                    return false;
                }
            }
            else if(b[i] == 20){
                if(tenRupees > 0 && fiveRupees > 0) {
                    tenRupees--;
                    fiveRupees--;
                } else if(fiveRupees >= 3) {
                    fiveRupees -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};
