class Solution {
public:
    // function for calculating matches in touranment
    int countMatch(vector<int>& matches){
        int n=matches.size();
        int noOfMatches=0;
        for(int i=0; i<n; i++){
            noOfMatches=matches[i]+noOfMatches;
        }
        return noOfMatches;
    }

    // function for cheking no is even or not
    bool checkEven(int& n){
        if(n%2==0){
            return true;
        }
        else{
            return false;
        }
    }
    // recursive function for getting matches count
    int tournamentMatches(int n){
        vector<int> matches;
        int advance=0;

        //base case
        if(n<=1){
            return countMatch(matches);
        }

        if(checkEven(n)){
            matches.push_back(n/2);
            advance=n/2;
        }
        else{
            matches.push_back((n - 1) / 2);
            advance=(n - 1) / 2 + 1;
        }

        // calling function recursively
        return countMatch(matches) + tournamentMatches(advance);
    }

    int numberOfMatches(int n) {
        int ans=tournamentMatches(n);
        return ans;
    }
};
