class Solution {
public:

    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }

    int maxFreqSum(string str) {
        unordered_map<char,int> mp;
        for(auto s:str){
            mp[s]++;
        }

        int maxV = 0;
        int maxC = 0;

        for(auto m:mp){
            if(isVowel(m.first)){
                maxV = max(m.second,maxV);
            }
            else {
                maxC = max(m.second,maxC);
            }
        }

        return maxV+maxC;
    }
};