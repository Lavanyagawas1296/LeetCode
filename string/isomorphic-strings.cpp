class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;

        unordered_map<char, char> sToT;
        unordered_map<char, char> tToS;

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i];
            char c2 = t[i];

            if (sToT.find(c1) == sToT.end() &&
                tToS.find(c2) == tToS.end()) {

                sToT[c1] = c2;
                tToS[c2] = c1;
            }
            else {
                if (sToT[c1] != c2 || tToS[c2] != c1)
                    return false;
            }
        }

        return true;
    }
};