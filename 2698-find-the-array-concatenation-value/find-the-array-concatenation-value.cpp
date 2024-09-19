class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        // there is many approch 
        // so I wiil try with list 
        list<int> ls(nums.begin(),nums.end());
        long long sum = 0;
        while(!ls.empty()){
            if(ls.size()==1){
                cout<<"We are single and value is "<<ls.front();
                sum+=ls.front();
                ls.pop_front();
                break;
            }
            long long f = ls.front();
            long long b = ls.back();
            cout<<"front : "<<f<<" back: "<<b<<endl;
            string sf = to_string(f);
            string sb = to_string(b);
            string s = sf+sb;

            sum+=stoi(s);
            cout<<"sum: "<<sum<<endl;
            cout<<"-------------"<<endl;
            ls.pop_front();
            ls.pop_back();

        }

        return sum;
    }
};