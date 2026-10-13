class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ix=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==i&&nums[i]<10)return i;
            int sum=0;
            int r=0;
            int j=0;
            while(nums[i]>0){
            r=nums[i]%10;
            sum+=r;
            nums[i]/=10;
            }
            if(sum==i)return sum;
        }
  return ix;  }
};