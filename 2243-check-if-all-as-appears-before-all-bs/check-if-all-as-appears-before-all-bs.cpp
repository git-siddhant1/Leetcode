class Solution {
public:
    bool checkString(string s) {
        int n=size(s)+1;
        for(int i=0;i<size(s);i++){
            if(s[i]=='b')n=i;
            if(s[i]=='a'&& i>n)return false;
        }
   return true; }

};