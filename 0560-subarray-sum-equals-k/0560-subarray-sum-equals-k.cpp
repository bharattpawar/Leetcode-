class Solution { 
public: 
    int subarraySum(vector<int>& nums, int k) { 
        unordered_map<int,int> mp; 
        mp.insert({0, 1});

        int sum = 0;
        int i = 0;
        int ans = 0;

        while(i < nums.size()) {
            sum += nums[i];

            if(mp.find(sum-k) != mp.end()) {
                ans += mp[sum-k];
            }

            mp[sum]++;
            i++;
        }

        return ans;
    } 
};