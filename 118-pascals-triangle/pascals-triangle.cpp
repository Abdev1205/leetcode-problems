class Solution {
public:

    vector<int> genRow(int row){
        long long ans = 1; 
        vector<int> ansRow;
        ansRow.push_back(1);

        for(int col=1; col<row; col++){
            // this formula is derived from ncr pattern 
            ans = ans * (row-col);
            ans = ans/col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for(int i=1; i<=numRows; i++){
           triangle.push_back(genRow(i));
        }

        return triangle;
    }
};