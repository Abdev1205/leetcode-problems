class Solution {
public:

    bool isValid(const string &s) {
        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i] == '0' && s[i + 1] == '0') {
                return false;
            }
        }
        return true;
    }

    vector<string> validStrings(int n) {
        vector<string> ans;
        int end = pow(2,n);
        for(int i=0; i<end; i++){
            bitset<32> binary(i);  
            string b = binary.to_string();
            cout<<b<<endl;
            string mb = b.substr(32 - n);  

            if (isValid(mb)) {
                ans.push_back(mb);
                cout<<mb<<endl;
            }
        }

        if(n==1){
            return ans;
        }

        return ans;
    }
};