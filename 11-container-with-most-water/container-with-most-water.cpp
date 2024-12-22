class Solution {
public:
    int maxArea(vector<int>& height) {
        // my algo 
        // first i will create int variable max_area =0;
        // the i will intialize start =0; and end =size -1;
        // now to find area we have to find length and width
        // so we will get weidth from subtracting end - start
        // and we will get height from minium height from start and end beacuse min height can use for storing but max height can not use for storing as water will store till its min hieght 

    int n = height.size();
    int start = 0, end = n - 1;
    int max_area = 0;
    
    while (start < end) {
        // minimum height of contauner in which water can be filled
        int minHeight = min(height[start], height[end]);
        // finding maximum area where we are giving lenght( end -start ) and height as argument and finding maximum of them 
        max_area = max(max_area, (end - start) * minHeight);
        if (height[start] < height[end]) {
            start++;
        } else {
            end--;
        }
    }
    
    return max_area;

        
    }
};