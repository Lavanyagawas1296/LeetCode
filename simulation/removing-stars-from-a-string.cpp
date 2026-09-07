class Solution {
public:
    string removeStars(string s) {
        string r = "";
        for (char x : s) {
            if (x == '*') {
                if (!r.empty())
                    r.pop_back();
            } else {
                r.push_back(x);
            }
        }
        return r;
    }
};