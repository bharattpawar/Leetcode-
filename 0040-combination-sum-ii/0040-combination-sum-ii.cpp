class Solution {
public:

void find(vector<int>& arr, vector<vector<int>>& ans, vector<int>& check, int target, int i) {
    
    if(target == 0){
        ans.push_back(check);
        return;
    }

    for(int j = i; j < arr.size(); j++){
        
        // skip duplicates
        if(j > i && arr[j] == arr[j-1]) continue;

        if(arr[j] > target) break;

        check.push_back(arr[j]);
        find(arr, ans, check, target - arr[j], j + 1);
        check.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    
    sort(candidates.begin(), candidates.end());

    vector<vector<int>> ans;
    vector<int> check;

    find(candidates, ans, check, target, 0);

    return ans;
}
};