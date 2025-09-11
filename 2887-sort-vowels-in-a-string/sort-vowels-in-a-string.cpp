class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c); 
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }


    string sortVowels(string str) {
        map<char,pair<int,int>> vowMap;
        vector<int> vIndex;
        vector<pair<char,int>> pVow;

        for(int i=0; i<str.size(); i++){
            char s = str[i];
            if(isVowel(s)){
                vIndex.push_back(i); 
                int ascii = s-'0';
                pair<int,int>p = vowMap[s];
                p.first = ascii;
                p.second++;
                vowMap[s]=p;

            }
        }

        for(auto v:vowMap){
            pair<char,int> p;
            p.first = v.first;
            p.second = v.second.second;
            pVow.push_back(p);
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