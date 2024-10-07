class Solution {
public:
    void findAndDelete(string &s, string &f1, string &f2) {
        while (true) {
            size_t found1 = s.find(f1);
            size_t found2 = s.find(f2);
            if (found1 != string::npos) {
                s.erase(found1, f1.size());
            } else if (found2 != string::npos) {
                s.erase(found2, f2.size());
            } else {
                break;  
            }
        }
    }

    int minLength(string s) {
        string f1 = "AB";
        string f2 = "CD";
        findAndDelete(s, f1, f2);

        return s.size();
    }
};
