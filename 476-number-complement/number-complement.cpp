class Solution {
public:
    int findComplement(int num) {
        bitset<32> binary(num);
        string b = binary.to_string();

        // removing the extra left zero

        int zeros = 0;
        for(auto c:b){
            if(c!='0'){
                break;
            }
            zeros++;
        }
        b = b.substr(zeros);

        // now we will swap to make the complement
        for(int i=0; i<b.size(); i++){
            if(b[i]=='0'){
                b[i]='1';
            }
            else{
                b[i]='0';
            }
        }

        cout<<b;
        return stoi(b,nullptr,2); // here 2 refers to binary 
    }
};