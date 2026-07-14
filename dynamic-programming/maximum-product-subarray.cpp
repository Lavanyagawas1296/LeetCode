class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prev_max=1,prev_min=1;
        int max_here,min_here;
        int maximum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            max_here = std::max({nums[i], nums[i] * prev_max, nums[i] * prev_min});
            min_here = std::min({nums[i], nums[i] * prev_max, nums[i] * prev_min});
            maximum=max(maximum,max_here);
            prev_max=max_here;
            prev_min=min_here;
        }
        return maximum;
    }
};