class Solution {
public:
    bool isPalindrome(string str) {
        int s= 0; 
        int e= str.size();

        while(s<=e){
            if(tolower(str[s])==tolower(str[e])){
                s++;
                e--;
                continue;
            }
            else if(!isalnum(str[s])){
                s++;
                continue;
            }
            else if(!isalnum(str[e])){
                e--;
                continue;
            }
            return false;
        }

        return true;
    }
};