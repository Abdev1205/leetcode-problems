class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> vs = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        vector<string> trans;

        for(int i=0; i<words.size(); i++){
            string str ="";
            for(int j=0; j<words[i].size(); j++){
                int index = words[i][j] - 'a';
                str+=vs[index];
            }
            trans.push_back(str);
            str="";
        }

        unordered_map<string,int> mp;

        for(auto t:trans){
            mp[t]++;
        }

        int ans = 0;

        for(auto m:mp){
            ans++;
        }

        return ans;
    }
};