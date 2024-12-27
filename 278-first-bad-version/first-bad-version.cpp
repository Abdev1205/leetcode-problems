// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // my approach 
        // I use d binary search to check whether it is bad version or not 
        // i will create a loop which will run till start<=end
        // isBadVersion is true which means that after that all verison is bad so we need to find bad version befor mid
        // and if isBadVersion is false then all verison before is correct so we have to fing bad verison after mid
        //  and in last we will return start becuse we need find first bad version so we will return start in last
        int start =0; 
        int end = n;
        int mid = start + ( end - start)/2;
        while(start<=end){
            if(isBadVersion(mid)){
                end = mid-1;
            }
            else if(!isBadVersion(mid)){
                start = mid +1;
            }
            mid = start + ( end - start)/2;
        }
        return start;
    }
};