class Solution {
public:
    vector<int> distributeCandies(int candies, int np) {
        int cgiven = 1; 
        vector<int> cp(np,0);

        int currp = 0;
        while(true){
            // check candy kam hai to pura de do 
            if(candies<cgiven){
                cp[currp]+=candies;
                break;
            }
            else{
                cp[currp]+=cgiven;
            }
            candies-=cgiven;
            cgiven++;

            if(currp==np-1){
                // matlab last hai
                currp=0;
            }
            else{
                currp++;
            }

        }

        for(auto c:cp){
            cout<<c<<" ";
        }

        return cp;
    }
};