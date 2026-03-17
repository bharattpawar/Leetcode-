class Solution {
public:


void find(vector<int>arr,vector<vector<int>>&ans,vector<int>check,int n,int i,int sum, int target){
     if(sum==target){
            ans.push_back(check); return;
        }
    if(i==n||sum>target){
        
        return;
    }check.push_back(arr[i]);
        find(arr,ans,check,n,i,sum+arr[i],target);
         check.pop_back();
     find(arr,ans,check,n,i+1,sum,target);

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>check;
        int n=candidates.size();
        find(candidates,ans,check,n,0,0,target);return ans;
    }
};