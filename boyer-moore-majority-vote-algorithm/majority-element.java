class Solution {
    public int majorityElement(int[] nums) {
        int ME=0,strength=0;

        for(int i =0;i<nums.length;i++){
            if(strength==0){
                ME=nums[i];
                strength++;
            }
            else if(ME==nums[i]){
                strength++;
            }
            else
            strength--;
        }
        return ME;
    }
}