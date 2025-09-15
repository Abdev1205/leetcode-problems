class Solution {
public:

    bool typeable(string str,vector<int> hash){
        for(int i=0; i<str.size(); i++){
            char c1 = str[i];
            int a = c1 - 'A';
            int c2 = hash[a];

            // cout<<"c1 : "<<c1<<endl;
            // cout<<"a : "<<a<<endl;
            // cout<<"c2 : "<<c2<<endl;

            if(c2==1){
                // cout<<"broken key found"<<endl;
                return false;
            }
        }
        cout<<"True for "<<str<<endl;

        return true;
    }

    int canBeTypedWords(string text, string bls) {
        vector<int> hash(58,0);
        int ans =0;

        for(int i=0; i<bls.size(); i++){
            int a = bls[i] - 'A';
            hash[a]=1;
        }

        for(int i=0; i<hash.size(); i++){
            char c = 'A' + i;
            // cout<<c<<" -> "<<hash[i]<<endl;
        }

        stringstream ss(text); 
        string word;
        vector<string> words;

        while (ss >> word) { 
            words.push_back(word);
        }

        for(int i=0; i<words.size(); i++){
            if(typeable(words[i],hash)){
                ans++;
            }
        }

        return ans;
    }
};