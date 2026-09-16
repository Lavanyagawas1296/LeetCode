class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>v;
        for(int i=nums2.size()-1;i>=0;i--){
            if(st.empty()){
                st.push(nums2[i]);
                v[nums2[i]]=-1;
            }
            else{
                while(!st.empty() && nums2[i] > st.top()){
                    st.pop();
                }
                if(st.empty()){
                    st.push(nums2[i]);
                    v[nums2[i]]=-1;
                }
                else{
                    v[nums2[i]]=st.top();
                    st.push(nums2[i]);

                }
            }
        }
        for(int i =0;i<nums1.size();i++){
            nums1[i]=v[nums1[i]];
        }
        return nums1;
    }
};