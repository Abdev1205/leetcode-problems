class Solution {
public:
    // my algo
    // i will create ans vector
    // add all the value of nums in ans vector and also convert int to string 
    // first i will sort the vector in descending order
    // I will use my customise comprator function to sort in descending order
    // i will crate ans string and will concatinate value of snums in ans string 

    static bool mycomp(string a,string b){
        string pair1=a+b;
        string pair2=b+a;
        return pair1>pair2;
    }
    string largestNumber(vector<int>& nums) {
        // created this vector to store nums value in charcter insted od int
        vector<string>snums;
        for(auto n:nums){
            snums.push_back(to_string(n));
        }
        // using customized comprator function to sort in descending order
        sort(snums.begin(),snums.end(),mycomp);
        if(snums[0]=="0") return "0";
        string ans="";
        for(auto str:snums){
            //concating snums value iin single string ans
            ans+=str;
        }
        return ans;

    }
};