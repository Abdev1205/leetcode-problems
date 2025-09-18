class Solution {
public:
    int mySqrt(int x) {
        long long start= 0; 
        long long end = x;

        long ans = 0;

        while(start<=end){
            long mid = start + (end-start)/2;
            if(mid*mid==x){
                // we found ans
                return mid;
            }
            else if(mid*mid>x){
                end = mid-1;
            }
            else {
                ans = mid;
                start = mid+1;
            }
        }

        return ans;
    }
};