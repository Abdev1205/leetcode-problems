class Solution {
public:
    bool isPalindrome(int x) {
        // Typecasting Approach with two pointerr 
        string str = to_string(x);
        int start = 0;
        int end = str.length()-1;

        while(start<=end){
            char s = str[start];
            char e = str[end];
            // if both are not same return false
            if(s!=e){
                return false;
            }
            start++;
            end--;
        }
        return true;   
    }
};