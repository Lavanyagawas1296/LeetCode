class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n=nums.size();
        long long pro=1,count=0;
        int r=0,l=0;
        for(r=0;r<n;r++){
            pro=pro*nums[r];
            while(pro>=k){
                pro=pro/nums[l];
                l++;
            }
            count+=r-l+1;
        }
        
        return count;
    }
};