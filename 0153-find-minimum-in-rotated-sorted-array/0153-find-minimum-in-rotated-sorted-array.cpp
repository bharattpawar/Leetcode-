class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[end]) {
                // Minimum right side mein hai
                start = mid + 1;
            } 
            else {
                // Minimum mid ya left side mein hai
                end = mid;
            }
        }

        return nums[start];
    }
};