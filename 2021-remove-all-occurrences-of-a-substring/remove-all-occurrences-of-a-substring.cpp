class Solution {
public:

    void remove(string &s, string &part){
        int found=s.find(part);
        if(found!=string::npos){
            // part found in string
            s.erase(found,part.size());
        }   
        else{
            return;
        }
        remove(s,part);
    }

    string removeOccurrences(string s, string part) {
        // int pos = s.find(part);
        // while(pos != string::npos){
        //     s.erase(pos,part.length());
        //     pos=s.find(part);
        // }
        // return s;
        remove(s,part);
        return s;
    }
};