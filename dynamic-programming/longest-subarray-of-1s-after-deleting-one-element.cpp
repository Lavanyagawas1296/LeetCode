class Solution {
public:
    int longestSubarray(vector<int>& nums) {
      int n=nums.size();
      int R=0,L=0,maxsum=0,sum=0;
      for(R=0;R<n;R++){
        sum+=nums[R];
        while(sum<=R-L-1){
            sum-=nums[L++];
        }
        maxsum=max(sum,maxsum);
      } 
      if(maxsum==n)
      return (n-1);
      else 
      return maxsum; 
    }
};