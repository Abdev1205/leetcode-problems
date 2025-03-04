class Solution {
public:
    bool solveRecursive(int p, int n){
        // base case 
        if(n==0){
            return true;
        }

        // If power exceeds n 
        if(pow(3,p)>n){
            return false;
        }

        //pick power 
        bool pickPower = solveRecursive(p+1, n-pow(3,p));

        // Not picking power
        bool nPickPower = solveRecursive(p+1, n);

        return pickPower || nPickPower;
    }

    bool checkPowersOfThree(int n) {
        // Brute Force
        return solveRecursive(0,n);

    }
};