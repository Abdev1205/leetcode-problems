class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        for (char ch : s) {
            if (ch == letter) {
                count++;
            }
        }
        int size = s.size();
        if (count == 0) {
            return 0;
        }
        // Calculate percentage using integer arithmetic
        int percentage = (count * 100) / size;
        return percentage;
    }
};