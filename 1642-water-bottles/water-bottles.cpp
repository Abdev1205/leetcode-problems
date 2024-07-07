class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int d = numBottles ;
        int pBottles = numBottles / numExchange;
        int extraBottles = numBottles % numExchange;
        int emptyBottle =0;
        int leftBottles = pBottles +  extraBottles;
        cout<<" p :"<<pBottles<<" e "<<extraBottles<<endl;
        int i=0;
        while(leftBottles>0){
            if(i==50){
                break;
            }
            d += pBottles;
            emptyBottle = pBottles;
            leftBottles = emptyBottle +  extraBottles;
            pBottles = (leftBottles) / numExchange;
            extraBottles = (leftBottles) % numExchange;
            // d += pBottles;
            i++;
            cout<<" p :"<<pBottles<<" e "<<extraBottles<<" l "<<leftBottles<<" d "<<d<<endl;
        }
        return d;
    }
};