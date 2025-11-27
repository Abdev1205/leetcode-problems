class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> f1(26,0);
        vector<int> f2(26,0);

        for(int i=0; i<word1.size(); i++){
            int c1 = word1[i]-'a';
            int c2 = word2[i]-'a';
            f1[c1]++;
            f2[c2]++;
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