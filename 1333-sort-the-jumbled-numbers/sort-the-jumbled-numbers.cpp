class Solution {
public:

    static bool compare(pair<int,int> a, pair<int,int> b){
        return a.second<b.second;
    }

    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        // Approach 
        // we will just create a vector of pair 
        // we will store prev and replaced value 
        // and then we will sort them according to their previous value

        // brture force
        vector<pair<int,int>> swaping;
        for(int i=0; i<nums.size(); i++){
            // get the numer and convert it to string to make it easy to work
            pair<int,int> p;
            p.first = nums[i];
            string m = to_string(nums[i]);
            // now we will replacing value according to mapping
            for(int i=0; i<m.size(); i++){
                char ch = m[i];
                int index = ch-'0';
                // cout << typeid(m[i]).name() << endl;
                // int swapIndex = m[i]-'0';
                int mapVal = mapping[index];
                char mapChar = '0' + mapVal;
                m[i]=mapChar;
                // cout<<m[i]<<" -> "<<mapChar<<endl;
            }
            // cout<<m<<" ";
            // now cconvert m to int 
            int replaced = stoi(m);
            cout<<replaced<<" ";
            p.second = replaced;
            swaping.push_back(p);
        }

        // now we will sort accoring to p.second that is swapped value
        sort(swaping.begin(),swaping.end(), compare);

        // now update the value of nums
        for(int i=0; i<swaping.size(); i++){
            int originalVal = swaping[i].first;
            nums[i]=originalVal;
        }

        return nums;
    }
};