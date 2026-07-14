class Solution {
    public int pivotIndex(int[] nums) {
        int ls=0,rs=0;
        int n=nums.length;
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<n;i++){
            rs=nums[n-1]-nums[i];
            if(ls==rs){
                return i;
            }
            ls=nums[i];
        }
        return -1;
    }
}