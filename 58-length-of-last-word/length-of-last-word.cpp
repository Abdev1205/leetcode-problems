class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length()-1;
        string ans="";
        while(len>=0){
            if(ans=="" && s[len]==' '){
                len--;
                continue;
            }
            else if (ans!="" && s[len]==' '){
                break;
            }
            else{
                ans+=s[len];
            }
            len--;
        }
        return ans.size();
        
    }
};