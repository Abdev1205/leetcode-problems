class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // Omitting space  optimzation now
        // I use map so that I find the ele in 0(1);
        // then if that index is not foudn then that will be no 
        // I wil find the no form 1 to nums.size();

        unordered_map<int,int> mp;
        for(auto n:nums){
            mp[n]++;
        }

        // Now iterate in the range
        // here edge is case is that we to search for [1,n+1] range earlier I was doing for n
        for(int i=1; i<=nums.size()+1; i++){ 
            auto found = mp.find(i);
            if(found==mp.end()){
                return i;
            }
        }


        return -1;
    }
};