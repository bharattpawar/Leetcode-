class Solution {
public:
    int minDays(vector<int>& arr, int m, int k) {
        int start = INT_MAX;
        int end = 0;
        int ans = INT_MAX;
        int n = arr.size();

        if ((long long)m * k > n)
            return -1;

        for (int i = 0; i < n; i++) {
            start = min(start, arr[i]);
            end = max(end, arr[i]);
        }

        while (start <= end) {
            int mid = start + (end - start) / 2;

            int flowers = 0;
            int bouquets = 0;

            for (int i = 0; i < n; i++) {
                if (arr[i] <= mid) {
                    flowers++;

                    if (flowers == k) {
                        bouquets++;
                        flowers = 0;
                    }
                }
                else {
                    flowers = 0;
                }
            }

            if (bouquets >= m) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};