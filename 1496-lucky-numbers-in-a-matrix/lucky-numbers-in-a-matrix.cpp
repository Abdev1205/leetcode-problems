class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        // brute forces
        vector<int> ans;

        for(int row=0; row<matrix.size(); row++){
                // get the no and check in 
                // row : so min
                // col : so max

                // finding min for the row[i]
                int minIndex = min_element(matrix[row].begin(), matrix[row].end()) - matrix[row].begin();
                // cout << "Min element index of row " << row << " is: " << minIndex << endl;

                int minVal = matrix[row][minIndex];
                int maxVal = INT_MIN;
                // now find the max in col 
                for(int i=0; i<matrix.size(); i++){
                    int val = matrix[i][minIndex];
                    maxVal = max(maxVal,val);
                }

                if(minVal==maxVal){
                    ans.push_back(minVal);
                }
        }
        return ans;
    }
};