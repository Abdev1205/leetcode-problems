class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        vector<string> str;
        string temp = ""; // Moved outside the loop
        for (int i = 0; i < s.size(); i++) {
            if (isspace(s[i]) && temp.size() != 0) {
                str.push_back(temp);
                temp = ""; // Reset temp for the next word
            } else if (!isspace(s[i])) {
                temp += s[i];
            }
        }

        // Add the last word if not empty
        if (temp.size() != 0) {
            str.push_back(temp);
        }
        cout << str.size() << endl;

        int start=0;
        int end=str.size()-1;
        while(start<=end){
            swap(str[start],str[end]);
            start++;
            end--;
        }

        for(auto s:str){
            ans+=s;
            ans+=" ";
        }
        ans.pop_back();
        return ans;
    }
};