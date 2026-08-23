class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0;
        int p=1;
        int i=0;
        int n1=n;
      while(n>0){
      int r=n%10;
        n=n/10;
        s+=r;
        p*=r;
      }
      if(n1%(s+p)==0) return true;
  return false;  }
};