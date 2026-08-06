class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;
        int i=0,j=1;
        for(int j=0;j<prices.size();j++ ){
            if(prices[j]-prices[i]>p)p=prices[j]-prices[i];
            if(prices[i]>prices[j])i=j;
           
        }
  return p;  }
};