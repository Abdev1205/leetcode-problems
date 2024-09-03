class Solution {
public:

    void transform(string &s){
        int total = 0;
        for(int i=0; i<s.size(); i++){
            total+=s[i]-'0';
        }
        s = to_string(total);
    }

    string getAlphaVal(char c){
        return to_string(int(c-'a')+1);
    }

    int getLucky(string s, int k) {
        // intial operation 
        string initial = "";
        for(int i=0; i<s.size(); i++){
            // cout<<s[i]<<" : "<<getAlphaVal(s[i])<<endl;
            initial+=getAlphaVal(s[i]);
        }
        cout<<"intial "<<initial;

        while(k--){
            transform(initial);
        }

        return stoi(initial);


    }
};