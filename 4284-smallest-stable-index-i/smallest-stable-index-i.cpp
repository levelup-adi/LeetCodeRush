class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            
            int leftMax = nums[0];
            int rightMin = nums[i];

            // Find maximum from 0 to i
            for (int j = 0; j <= i; j++) {
                leftMax = max(leftMax, nums[j]);
            }

            // Find minimum from i to n-1
            for (int j = i; j < n; j++) {
                rightMin = min(rightMin, nums[j]);
            }

            // Check stability
            if (leftMax - rightMin <= k) {
                return i;
            }
        }

        return -1;
    }
};