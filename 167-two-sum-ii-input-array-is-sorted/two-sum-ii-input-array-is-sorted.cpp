class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int i=0,j=numbers.size()-1;
        int sum;
      while(i<n||i<j){
        sum=numbers[i]+numbers[j];
        if(sum==target)return {i+1,j+1};
        if(sum>target)j--;
        if(sum<target)i++;
      }

      return{i+1,j+1};
    }
};