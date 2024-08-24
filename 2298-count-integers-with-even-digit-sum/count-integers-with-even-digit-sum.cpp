class Solution {
public:
    int countEven(int num) {
        int counter = 0;

        for (int i = 2; i <= num; i++) {
            if (i > 10) {
                string snum = to_string(i);
                int sum = 0;
                for (int k = 0; k < snum.size(); k++) {
                    int temp = snum[k] - '0';
                    sum += temp;
                }
                if (sum % 2 == 0) {
                    counter++;
                }
            }
            else if(i<=10){
                // only even vale
                if(i==10){
                    continue;
                }
                else if(i%2==0){
                    counter++;
                }
            }
        }

        return counter;
    }
};