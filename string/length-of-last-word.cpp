class Solution {
public:
    int lengthOfLastWord(string s) {
        int ptr = s.size() - 1;
        int count = 0;

        while (ptr >= 0 && s[ptr] == ' ') {
            ptr--;
        }

        while (ptr >= 0 && isalpha(s[ptr])) {
            count++;
            ptr--;
        }

        return count;
    }
};