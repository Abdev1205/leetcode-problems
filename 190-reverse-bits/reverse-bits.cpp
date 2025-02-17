class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32>b1(n);
        string s1 = b1.to_string();
        reverse(s1.begin(), s1.end());
        bitset<32>b2(s1);
        unsigned long num = b2.to_ulong(); 
        return num;
    }
};