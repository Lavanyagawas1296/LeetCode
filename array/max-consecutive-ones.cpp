class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int L=0,R=0,sum=0,maxsum=0;
        for(R=0;R<n;R++){
            sum+=nums[R];
            if(sum<R-L+1){
                L=R+1;
                sum=0;
            }
            maxsum=max(sum,maxsum);
        }
        return maxsum;
    }
};