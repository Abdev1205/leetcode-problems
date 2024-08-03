class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        // brute force and chapri approach 
        // we can sort both of them and if they are equal then true else false

        int n = target.size();
        int m = arr.size();

        if(n!=m){
            return false;
        }

        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());

        return target==arr;


    }
};