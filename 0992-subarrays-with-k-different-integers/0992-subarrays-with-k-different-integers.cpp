class Solution {
public:int atMostK(vector<int>& nums, int k) {
    int n = nums.size();
    int start = 0, end = 0;
    unordered_map<int, int> mp;
    int ans = 0;

    while (end < n) {
        mp[nums[end]]++;

        while (mp.size() > k) {
            mp[nums[start]]--;
            if (mp[nums[start]] == 0)
                mp.erase(nums[start]);
            start++;
        }

        ans += (end - start + 1);  // 🔥 main logic
        end++;
    }
    return ans;
}
   int subarraysWithKDistinct(vector<int>& nums, int k) {
    return atMostK(nums, k) - atMostK(nums, k - 1);
 
    }
};