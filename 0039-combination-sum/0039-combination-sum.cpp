class Solution {
public:
void find(vector<int>& candidates,vector<vector<int>>&ans,vector<int>check,int i,int sum,int target){
if(i==candidates.size()||sum>target){
    return;
}
if(sum==target){
    ans.push_back(check);return;
}
check.push_back(candidates[i]);
sum+=candidates[i];
find(candidates,ans,check,i,sum,target);
check.pop_back();
 sum=sum-candidates[i];
find(candidates,ans,check,i+1,sum,target);






}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>check;
           int i=0;
           find(candidates,ans,check,i,0,target);
           return ans;
    }
};