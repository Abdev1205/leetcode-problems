class Solution {
public:

    void transpose(vector<vector<int>>& mat){
        int n = mat.size();

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
    }

    void reverseRow(vector<vector<int>>& mat){
        int n=mat.size();
        for(int i=0; i<n; i++){
            reverse(mat[i].begin(), mat[i].end());
        }
    }

    void tryWithBrute(vector<vector<int>>& mat){
        vector<vector<int>> ans(mat.size(),vector<int>(mat.size()));
        for(int row=0; row<mat.size(); row++){
            for(int col=0; col<mat[row].size(); col++){
                // thourgh pattern we found that first row will be last col 
                ans[col][(mat.size()-1)-row] = mat[row][col];
            }
        }
        mat=ans;
    }

    void tryWithOptimal(vector<vector<int>>& mat){
        // as we can se every row value to seems to be presentr in col but in revere way 
        // 1. We will create a transpose (swap row with col)
        // 2. then reverse each row

        transpose(mat);
        reverseRow(mat);


    }

    void rotate(vector<vector<int>>& matrix) {
        // tryWithBrute(matrix);
        tryWithOptimal(matrix);
    }
};