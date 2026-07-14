class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_len=INT_MAX;
        int r=0,l=0,sum=0;
        for(r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum>=target){
                min_len=min(min_len,r-l+1);
                sum-=nums[l++];
            }
        }if(min_len==INT_MAX)
        return 0;
        else
        return min_len;
    }
};
  
