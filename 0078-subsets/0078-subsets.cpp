class Solution {
public:


void findans(vector<vector<int>>&ans,vector<int>nums,vector<int>&part,int i,int n){
    if(i>=n){
ans.push_back(part);return;
    }
    part.push_back(nums[i]);
    findans(ans,nums,part,i+1,n);
    part.pop_back();
    findans(ans,nums,part,i+1,n);
return ;

}
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>>ans;
      vector<int>part;
      int n=nums.size();int i=0;
findans(ans,nums,part,i,n);
return ans;
    }
};