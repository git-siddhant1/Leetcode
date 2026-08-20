class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int j=0;
        for(int i=nums.size()/2;i<nums.size();i++){
          ans.push_back(nums[j]);
          ans.push_back(nums[i]);
          j++;
        }
 return ans;   }
};