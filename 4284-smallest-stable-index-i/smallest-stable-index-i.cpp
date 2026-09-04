class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mx=INT_MIN;
        int n=nums.size();
        vector <int> minv(n);
        minv[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            minv[i]=min(nums[i],minv[i+1]);
        }
        for(int i=0;i<n;i++){
            mx=max(nums[i],mx);
            if(mx-minv[i]<=k)return i;
        }
   return -1; }
};