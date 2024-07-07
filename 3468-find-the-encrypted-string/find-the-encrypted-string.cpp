class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.size();
        k = k % n;
        if(k<=0){
            return s;
        }

        string op = s;

        reverse(op.begin(), op.begin()+k);
        reverse(op.begin()+k,op.end());
        reverse(op.begin(),op.end());
        cout<<op;
        return op;
    }
};