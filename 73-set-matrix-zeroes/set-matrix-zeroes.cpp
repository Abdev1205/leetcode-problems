class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     // trying inplace 
     // if we will update all the value inTime so it may give wrong answer
     // So I will create a vector of pair 
     // we will be storing thr row and col were we have to do opeartion
     // instead of thinking about the data consitency

     vector<pair<int,int>> op;
     // getting all the operation from the array
     for(int row=0; row<matrix.size(); row++){
        for(int col=0; col<matrix[row].size(); col++){
            // if it is zero then store in vector
            if(matrix[row][col]==0){
                pair<int,int> p;
                p.first = row;
                p.second = col;
                op.push_back(p);
            }
        }
     }
     for(auto o:op){
        int row = o.first;
        int col = o.second;
        cout<<row<<" : "<<col<<endl;

        // row operation
        for(int i=0; i<matrix[row].size(); i++){
            matrix[row][i]=0;
        }

        // column opearation
        for(int j=0; j<matrix.size(); j++){
            matrix[j][col]=0;
        }
     }

    }
};