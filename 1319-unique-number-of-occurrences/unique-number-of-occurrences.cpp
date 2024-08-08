class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // brute force 
        // map approach

        unordered_map<int,int> mp;
        for(auto a:arr){
            mp[a]++;
        }

        // now uno reverse now we will store the freq as key so that while 
        // looping we can find the 
        unordered_map<int,int> freq;
        for(auto m:mp){
            // first we will found the freq in new feq map
            // if few is not found then we can say that 
            // it will be uniqu and if not then return the false
            auto feqFound  = freq.find(m.second);
            if(feqFound!=freq.end()){
                // which means that this freq is duplicte 
                return false;
            }
            freq[m.second] = m.first;
        }

        return true;
    }
};