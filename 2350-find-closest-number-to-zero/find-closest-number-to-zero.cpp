class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        pair<int,int> miny = {0,INT_MAX};

        for(int i=0; i<nums.size(); i++){
            int ans = abs(nums[i]-0);
            if(ans<miny.second){
                miny.first = nums[i];
                miny.second = ans;
            }
            mp[nums[i]]=ans;
        }

        for(auto m:mp){
            cout<<m.first<<" -> "<<m.second<<endl;
        }

        // handle same value;
        pair<int,int> maxy = {miny.first,0};

        for(auto m:mp){
            // only check for miny value;
            if(m.second==miny.second){
                // store the bigger one 
                if(m.first > maxy.first){
                    maxy.first = m.first;
                    maxy.second = m.second;
                }
            }
        }


        cout<<"Miny "<<miny.first<<" -> "<<miny.second<<endl;

        return maxy.first;
    }
};