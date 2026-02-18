class Solution {
public:
    bool hasAlternatingBits(int n) {
        bitset<32> a(n);
        cout<<n<<" -> "<<a<<endl;

        string s = a.to_string();
        s = s.substr(s.find('1'));
        cout<<s<<endl;

        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]){
                return false;
            }
        }

        return true;
    }
};