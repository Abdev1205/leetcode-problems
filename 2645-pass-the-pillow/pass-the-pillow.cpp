class Solution {
public:
    int passThePillow(int n, int time) {
        int path = n-1;
        int trip = time /path;
        cout<<"trip value is : "<<trip<<endl;
        if(time == 0){
            return 1;
        }
        else if(trip%2==0){
            // even ho to 
            return 1 + time%path;
        }
        else if(trip%2!=0){
            // odd ho to
            return n - time%path;
        }
        return -1;
    }
};