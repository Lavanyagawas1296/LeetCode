class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int j=0;
      int size=nums.size();
      while(j<size){
        if (nums[j]==val){
            for(int i=j;i<size-1;i++){
                nums[i]=nums[i+1];
            }
            size--;
        }
        else
        j++;
      } 
      return size; 
    }
};