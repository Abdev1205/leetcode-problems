class Solution {
public:
    bool isPowerOfTwo(int n) {
        cout<<n<<endl;
        if(n==1 || n==2){
            return true;
        }
        else if( n==0 || n>2 && n%2!=0){
            // cout
            return false;
        }
        else{
            return isPowerOfTwo(n/2);
        }
        
    }
};