class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        for(int i=0; i<s.size(); i+=k){
            string str = s.substr(i,k);
            int size = str.size();
            if(size<k){
                for(int j=0; j<k-size; j++){
                    str+=fill;
                }
            }
            ans.push_back(str);
        }

        return ans;
    }
};