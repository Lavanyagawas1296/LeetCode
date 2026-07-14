class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int max_sum=nums[0],current_sum=nums[0],total=0,minimum=nums[0],min_sum=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            total+=nums[i];
            if(i>0){
                current_sum=max(nums[i],current_sum+nums[i]);
                max_sum=max(current_sum,max_sum);

                minimum=min(nums[i],minimum+nums[i]);
                min_sum=min(minimum,min_sum);
            }
        }
        if(max_sum<0){
            return max_sum;
        }
        return max(max_sum,total-min_sum);
    }
};