class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a;
        int x = 0;
        vector<int> b;
        int y = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] < 0) a.push_back(nums[i] * nums[i]), x++;
            else b.push_back(nums[i] * nums[i]), y++;
        }
        reverse(a.begin(), a.end());
        int i = 0, j = 0, idx = 0;
        while(i < x && j < y) {
            if(a[i] < b[j])
                nums[idx++] = a[i++];
            else
                nums[idx++] = b[j++];
        }
        while(i < a.size())
            nums[idx++] = a[i++];
        while(j < b.size())
            nums[idx++] = b[j++];
        return nums;
    }
};