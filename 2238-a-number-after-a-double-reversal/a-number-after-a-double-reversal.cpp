class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0){
            return true;
        }
        // I will use string manipulation 
        string s1 = to_string(num);

        // now i will be reversing the string 
        reverse(s1.begin(),s1.end());

        // now removing the extra zeros;
        int z = 0;
        for(auto s:s1){
            if(s!='0'){
                break;
            }
            z++;
        }
        cout<<"Before rev "<<s1<<endl;

        s1 = s1.substr(z);
        cout<<"After rev : "<<s1<<endl;

        // now revere it again

        reverse(s1.begin(),s1.end());

        cout<<"After rev : "<<s1<<endl;

        return to_string(num)==string(s1);
    }
};