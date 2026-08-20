class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        deque<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)ans.push_front(nums[i]);
            else ans.push_back(nums[i]);
            
        }
        vector<int>res(ans.begin(),ans.end());
   return res; }
};