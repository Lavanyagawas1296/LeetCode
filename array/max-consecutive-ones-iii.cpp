class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int L = 0, sum = 0, maxlen = 0;
        
        for (int R = 0; R < n; R++) {
            sum += nums[R];  
            while ((R - L + 1) - sum > k) {
                sum -= nums[L++];
            }
            maxlen = max(maxlen, R - L + 1);
        }
        
        return maxlen;
    }
};