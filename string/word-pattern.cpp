class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);

        string word;
        int count = 0;
        int j = 0;
        unordered_map<char, string> forward;
        unordered_map<string, char> reverse;

        // while (ss >> word) {
        //     count++;
        // }

        // if (count != pattern.size())
        //     return false;
        // else {

            while (ss >> word || j < pattern.size()) {
                char p = pattern[j];

                if (forward.count(p) && forward[p] != word)
                    return false;
                if (reverse.count(word) && reverse[word] != p)
                    return false;

                forward[p] = word;
                reverse[word] = p;
                j++;
            }
            return (j) == pattern.size();
        // }
    }
};