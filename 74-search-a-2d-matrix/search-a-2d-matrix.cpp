class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m=matrix.size();
    if(m==0){
        return false;
    }
    int n=matrix[0].size();
    if(n==0){
        return false;
    }
    for(int i=0; i<m; i++){
        int start=0; 
        int end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(matrix[i][mid]==target){
                return true;
            }
            else if(matrix[i][mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
    }
    return false;
    }
};