class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> ans;
        int n = nums.size();

        for(int fix = 0; fix < n-2; fix++) {

            if(fix > 0 && nums[fix] == nums[fix-1]) 
                continue;   // fix duplicates skip

            int start = fix + 1;
            int end = n - 1;
            int tofind = -nums[fix];

            while(start < end) {
                int sum = nums[start] + nums[end];

                if(sum == tofind) {
                    ans.push_back({nums[fix], nums[start], nums[end]});

                    while(start < end && nums[start] == nums[start+1]) start++;
                    while(start < end && nums[end] == nums[end-1]) end--;

                    start++;
                    end--;
                }
                else if(sum < tofind) {
                    start++;
                }
                else {
                    end--;
                }
            }
        }
        return ans;
    }
};
