class Solution {
public:
    bool isPalindrome(string str) {
        // Two Pointer Approach 
        int len = str.size();
        int s=0;
        int e=len-1;

        while(s<=e){
            if(!isalnum(str[s])){
                s++;
                continue;
            }
            if(!isalnum(str[e])){
                e--;
                continue;
            }

            if(tolower(str[s])==tolower(str[e])){
                s++;
                e--;
                continue;
            }
            return false;

        }
        return true;
    }
};