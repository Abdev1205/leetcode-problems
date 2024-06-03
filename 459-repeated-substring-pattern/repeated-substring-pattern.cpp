class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string superset=s+s;
        string sub=superset.substr(1,superset.size()-2);
        if(sub.find(s)!=string::npos){
            return true;
        }
        else{
            return false;
        }
    }
};