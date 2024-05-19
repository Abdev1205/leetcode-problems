class Solution {
public:

    bool even(int n){
        if(n%2==0){
            return true;
        }
        return false;
    }

    bool check(int row,int col){
        if(even(row)==even(col)){
            return false;
        }
        return true;
    }

    bool squareIsWhite(string c) {
        int row = int(c[1])-48;
        int col = c[0] -0 -96;
        cout<<"row : "<<row<<endl;
        cout<<"col : "<<col<<endl;
        // cout<<'a'-0 -96;
        return check(row,col);
    }
};