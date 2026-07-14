class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        int rsum=0,lsum=0;
        for(int x: nums)
        sum+=x;
        for(int i=0;i<nums.size();i++)
        {
            rsum=sum-lsum-nums[i];
            if(rsum==lsum){
            return i;
            }
            lsum+=nums[i];
        }
        return -1;
    }
};