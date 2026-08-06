class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==val)i=j;
            if(nums[j]!=val)nums[k]=nums[j],i++,k++;
            
        }
   return k; }
};