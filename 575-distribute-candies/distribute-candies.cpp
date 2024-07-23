class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> variety;
        int canEat = candyType.size()/2;

        for(auto c:candyType){
            variety[c]++;
        }

        int totalVariety = 0;

        for(auto v:variety){
            totalVariety++;
            cout<<v.first<<" : "<<v.second<<endl;
        }

        return min(totalVariety,canEat);
    }
};