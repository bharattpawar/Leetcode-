class Solution {
public:

    void solve(vector<int>& candidates,
               vector<vector<int>>& ans,
               vector<int>& check,
               int target,
               int i,
               int sum) {

        if (sum == target) {
            ans.push_back(check);
            return;
        }

        if (sum > target || i >= candidates.size()) {
            return;
        }

        for (int j = i; j < candidates.size(); j++) {

            // Duplicate skip
            if (j > i && candidates[j] == candidates[j - 1]) {
                continue;
            }

            // Since array is sorted
            if (sum + candidates[j] > target) {
                break;
            }

            // Take
            check.push_back(candidates[j]);

            // j + 1 because each element can be used only once
            solve(candidates, ans, check,
                  target, j + 1, sum + candidates[j]);

            // Backtrack
            check.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates,
                                         int target) {

        vector<vector<int>> ans;
        vector<int> check;

        // Required for duplicate handling and early break
        sort(candidates.begin(), candidates.end());

        solve(candidates, ans, check, target, 0, 0);

        return ans;
    }
};