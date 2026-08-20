class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int j=0;
        for(int i=n;i<2*n;i++){
          ans.push_back(nums[j]);
          ans.push_back(nums[i]);
          j++;
        }
 return ans;   }
};