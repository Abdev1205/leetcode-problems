class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        // brute force
        string ans = "";
        int index = 0;
        int len = s.size();
        for(int i=0; i<len; i++){
            if(index<spaces.size() && i==spaces[index]){
                ans+=" ";
                index++;
            }
            ans+=s[i];
        }

        return ans;

        // string ans = s; 

        // for(int i=0; i<spaces.size(); i++){
        //     ans.insert(spaces[i]+i, 1, ' ');
        // }

        // return ans;
    }
};