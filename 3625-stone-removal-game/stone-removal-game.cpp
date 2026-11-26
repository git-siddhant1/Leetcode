class Solution {
public:
    bool canAliceWin(int n) {
      int a=10;
        bool turn=true;
        while(n>=a){
            n-=a;
            a--;
            turn= !turn;
      }
 return !turn;   }
};