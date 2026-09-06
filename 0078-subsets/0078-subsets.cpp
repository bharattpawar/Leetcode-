class Solution {
public:
void find(vector<int>&nums,vector<vector<int>>&ans,vector<int>&check,int i){
if(i==nums.size()){
    ans.push_back(check);
    return;
}
check.push_back(nums[i]);
find(nums,ans,check,i+1);
check.pop_back();
find(nums,ans,check,i+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
       int i=0;
       vector<vector<int>>ans;
       vector<int>check;
  
       find(nums,ans,check,i);
       return ans; 
    }
};