class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> f1(26,0);
        vector<int> f2(26,0);

        for(auto w:word1){
            int c1 = w-'a';
            f1[c1]++;
        }
        for(auto w:word2){
            int c1 = w-'a';
            f2[c1]++;
        }

        for(int i=0; i<26; i++){
            int a1 = f1[i];
            int a2 = f2[i];

            int diff = abs(a1-a2);
            if(diff>3){
                return false;
            }
        }

        return true;
    }
};