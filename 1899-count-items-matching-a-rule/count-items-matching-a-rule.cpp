class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        // brute force
        int ans = 0;
        int searchIndex = -1;
        if(ruleKey == "type"){
            searchIndex = 0;
        }
        else if(ruleKey == "color"){
            searchIndex = 1;
        }
        else if(ruleKey == "name"){
            searchIndex = 2;
        }

        for(int i=0; i<items.size(); i++){
            // search using index
            bool isMatch = items[i][searchIndex]==ruleValue;
            if(isMatch){
                ans++;
            }
        }

        return ans;

    }
};