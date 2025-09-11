class Solution {
public:
    bool isVowel(char c) {
        string vowels = "aeiou";
        c = tolower(c); 
        return vowels.find(c) != std::string::npos;
    }


    string sortVowels(string str) {
        map<char,pair<int,int>> vowMap;
        vector<int> vIndex;
        vector<pair<char,int>> pVow;

        for(int i=0; i<str.size(); i++){
            char s = str[i];
            if(isVowel(s)){
                // cout<<"Adding i "<<i<<" in vector "<<endl;
                vIndex.push_back(i); 
                int ascii = s-'0';
                pair<int,int>p = vowMap[s];
                p.first = ascii;
                p.second++;
                vowMap[s]=p;

            }
        }

        for(auto v:vowMap){
            cout<<v.first<<" -> "<<v.second.first<<" , "<<v.second.second<<endl;
            pair<char,int> p;
            p.first = v.first;
            p.second = v.second.second;
            pVow.push_back(p);
        }

        cout<<"--------\n";

        for(int i=0; i<vIndex.size(); i++){
            cout<<vIndex[i]<<endl;
        }
        cout<<"--------\n";

        for(int i=0; i<pVow.size(); i++){
            cout<<pVow[i].first<<" -> "<<pVow[i].second<<endl;
        }

        int index = 0;

        for(int i=0; i<vIndex.size(); i++){
            // check kar na hai ki kaunsa char add karna hai 
            char c;
            if(index<pVow.size()){
                if(pVow[index].second>0){
                    c=pVow[index].first;
                }
                else{
                    // matlab piche wala sab fill hogaya hai then
                    // move ahead
                    index++;
                    c=pVow[index].first;
                }
            }

            // replace karo 
            str[vIndex[i]]=c;
            pVow[index].second--;

        }

        return str; 
    }
};