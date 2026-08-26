class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c2 = 0, val;
        for (int i = 0; i < nums.size(); i++) {
            val = nums[i];
            int c = 0; 
            while (val != 0) {
                val = val / 10;
                c = c + 1;
            }
            if (c % 2 == 0) {
                c2++;
            }
        }
        return c2;
    }
};