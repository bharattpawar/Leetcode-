class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int effectiveRotation = k % n;

        if (effectiveRotation == 0) return;

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + effectiveRotation);

        reverse(nums.begin() + effectiveRotation, nums.end());
    }
};