class Solution {
public:
    void reverseString(vector<char>& s) {
        // my aproach
        // I will use two pointer approach to solve this question 
        // first I will intaialize start and end 
        // then i will create a loop which iterate till start<=end
        // during itertation i will swap s[start] with s[end];
        int start=0;
        int end = s.size()-1;
        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};