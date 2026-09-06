class Solution {
public:
void solve(vector<int>& candidates,vector<vector<int>>&ans,vector<int>&check,int target,int i,int sum){

if(sum>target||i>=candidates.size()){
    return;
}
if(sum==target){
    ans.push_back(check);return;
}
check.push_back(candidates[i]);
solve(candidates,ans,check,target,i,sum+candidates[i]);
 
check.pop_back();
solve(candidates,ans,check,target,i+1,sum);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>check;int sum=0;
        int i=0;
        solve(candidates,ans,check,target,i,sum);
        return ans;
    }
};