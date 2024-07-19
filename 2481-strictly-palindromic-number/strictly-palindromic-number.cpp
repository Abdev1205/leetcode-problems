class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        bitset<32>binary(n);
        string b = binary.to_string();
        int firstOneIndex =0;
        for(int i=0; i<=32; i++){
            if(b[i]=='1'){
                firstOneIndex = i;
                // cout<<"Found at: "<<i<<endl;
                break;
            }
            // cout<<b[i]<<" ";
        }
        // cout<<firstOneIndex<<endl;
        int len = 32 - firstOneIndex;
        b = b.substr(32-len);
        cout<<b<<endl;

        return false;
    }
};