class Solution {
public:

    string revertStr(string str){
        string ans = str;
        for(int i=0; i<ans.size(); i++){
            if(ans[i]=='0'){
                ans[i]='1';
            }
            else{
                ans[i]='0';
            }
        }
        return ans;
    }

    string findBs(string prevbs, int i, vector<string> &bs){
        string prevStr = bs[i-1];
        // cout<<"prevStr : "<<prevStr<<endl;
        string invertPrevStr = revertStr(prevStr);
        // cout<<"invertPrevStr : "<<invertPrevStr<<endl;
        string revInvPrevStr = invertPrevStr;
        reverse(revInvPrevStr.begin(), revInvPrevStr.end());
        // cout<<"revInvPrevStr : "<<revInvPrevStr<<endl;
        return prevStr + "1" + revInvPrevStr;
        // return "";
    }

    char findKthBit(int n, int k) {
        vector<string> bs;
        string prevBs = "0";
        bs.push_back(prevBs);
        for(int i=1; i<=n; i++){
            string str = findBs(prevBs,i, bs);
            // cout<<"str of i = "<< i+1<<" -> " <<str<<endl;
            bs.push_back(str);
        }

        string ans = bs[bs.size()-1];
        return ans[k-1];
    }
};