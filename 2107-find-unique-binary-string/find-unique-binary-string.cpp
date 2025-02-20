class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int len = nums.size();
        int upLimit = pow(2,len);
        int lowLimit = pow(2,len-1);
        unordered_map<string,int> mp;

        for(auto n:nums){
            mp[n]++;
        }

        // Now I will create a Binary number from lower limit to upper limit
        // then I will search for that number in map 
        for(int i=lowLimit; i<=upLimit; i++){
            const int s = len;
            string bStr = bitset<32>(i).to_string().substr(32-len);
            if(mp.find(bStr)==mp.end()){
                return bStr;
            }
        }
        return "Abhay";
    }
};