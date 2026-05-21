class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
          int n = nums.size();

        int oddCount = 0;
        int prevCount = 0;
        int result = 0;

        int i = 0;
        int j = 0;

        while (j < n) {

            // If current element is odd
            if (nums[j] % 2 != 0) {
                oddCount++;
                prevCount = 0;
            }

            // When we get exactly k odd numbers
            while (oddCount == k) {

                prevCount++;

                // Remove left side elements
                if (i < n && nums[i] % 2 == 1) {
                    oddCount--;
                }

                i++;
            }

            // Add all valid subarrays
            result += prevCount;

            j++;
        }

        return result;
    }
};