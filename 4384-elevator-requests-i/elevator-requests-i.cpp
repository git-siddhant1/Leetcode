class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int x=requests[0];
        for(int i=1;i<requests.size();i++){
           x+= abs(requests[i]-requests[i-1]);
        }
   return x; }
};