class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        unordered_map<int, int> visited; 
        int j = 0; 
        for (int i = 0; i < str1.size() && j < str2.size(); i++) {
            char current = str1[i];
            char next = (current == 'z') ? 'a' : current + 1;

            if (current == str2[j] || next == str2[j]) {
                visited[j] = i; 
                j++; 
            }
        }

        return j == str2.size();
    }
};
