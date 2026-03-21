class Solution {
public:
    void find(vector<int>& candidates, vector<int>& check, vector<vector<int>>& ans, int i, int sum, int target) {
        
        if(sum == target){
            ans.push_back(check);
            return;
        }

        if(sum > target) return;

        for(int index = i; index < candidates.size(); index++){

            // skip duplicates
            if(index > i && candidates[index] == candidates[index - 1]) continue;

            check.push_back(candidates[index]);

            find(candidates, check, ans, index + 1, sum + candidates[index], target);

            check.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        
        vector<vector<int>> ans;
        vector<int> check;

        find(candidates, check, ans, 0, 0, target);

        return ans;
    }
};