class Solution {
public:
    int romanToInt(string s) {

        //my algo
        //simple iterate karna hai pura string tak
        // ek onorderd map banana hai jisme key me roman no hoga nad value me roman no ke values hoga
        //check karna hai ki i+1 is greater tha i hai to mujhe i ko ans se minus karna hai and then I will add i+1 in ans 
        // then i will return the ans
        //making unordermap
        unordered_map<char, int> romanToIntMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            //if i+1 is greater then i then we have subtect that i from previous value
            // ex 1245 here 4 is less than five then we will subtect 40 and then add 50 as it is
            if(i+1 < s.length() && romanToIntMap[s[i]] < romanToIntMap[s[i+1]]){
                // subtecting the value
                ans -= romanToIntMap[s[i]];
            }
            else{
                ans += romanToIntMap[s[i]];
            }
        }
        return ans;
    }
};
