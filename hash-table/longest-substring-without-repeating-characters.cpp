class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> hash;
        int Right=0,Left=0,len=0;
        int max_len=0;

        for(Right=0; Right<s.length(); Right++){
            hash[s[Right]]++;

            while( hash[s[Right]] > 1){
                hash[s[Left]]--;
                Left++;
            }

            len=Right-Left+1;
            max_len=max(len,max_len);
        }
        return max_len;
    }
};