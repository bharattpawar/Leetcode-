class Solution {
public:
    static const int MOD = 1e9 + 7;

    int numberOfPermutations(int n, vector<vector<int>>& requirements) {
        vector<int> req(n, -1);

        for (auto &r : requirements) {
            req[r[0]] = r[1];
        }

        // dp[j] = number of ways to arrange current prefix
        // having exactly j inversions
        vector<long long> dp(n * (n - 1) / 2 + 1, 0);
        dp[0] = 1;

        int maxInv = 0;

        for (int len = 1; len <= n; len++) {
            int newMaxInv = maxInv + (len - 1);
            vector<long long> ndp(newMaxInv + 1, 0);

            long long window = 0;

            for (int inv = 0; inv <= newMaxInv; inv++) {

                if (inv <= maxInv)
                    window = (window + dp[inv]) % MOD;

                if (inv - (len - 1) - 1 >= 0)
                    window = (window - dp[inv - len]) % MOD;

                ndp[inv] = (window + MOD) % MOD;
            }

            maxInv = newMaxInv;
            dp = ndp;

            // Requirement for prefix ending at len-1
            if (req[len - 1] != -1) {
                int required = req[len - 1];

                if (required > maxInv) {
                    return 0;
                }

                vector<long long> filtered(maxInv + 1, 0);
                filtered[required] = dp[required];
                dp = filtered;
            }
        }

        long long ans = 0;

        for (long long x : dp)
            ans = (ans + x) % MOD;

        return ans;
    }
};