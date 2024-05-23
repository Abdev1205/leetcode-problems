class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();

    // No extra space is needed to solve

    //For transposing the matrix (diagonal remain same just the right half is change)

    // Time complexity = O(N/2 * N/2)

    for(int i=0;i<n-1;i++){

        for(int j=i+1;j<n;j++){

            swap(mat[i][j],mat[j][i]);

        }

    }

 

    //For reversing every row

    // Time complexity = O(N*N/2) 

    for(int i=0;i<n;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
    

    }
};
