class Solution {
public:
    string removeDuplicates(string s) {
        string st = "";
        for (char x : s) {
            if (!st.empty() && x == st.back()) {
                st.pop_back();
            } else {
                st.push_back(x);
            }
        }
        return st;
    }
};